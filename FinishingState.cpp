#include "FinishingState.h"

FinishingState::FinishingState() : State("Finished"){}

void FinishingState::handleOrder(Order* order) {
    std::cout << "Order already completed.\n";
}

void FinishingState::prepare(Order* order){
    std::cout << "Cannot modify. Order is already finished.\n";
}

void FinishingState::cook(Order* order){
    std::cout << "Cannot cook. Order is already finished.\n";
}

void FinishingState::complete(Order* order){
    std::cout << "Following order is completed and ready for pickup :\n" << order->getOrderName() << "\nTotal: R" << order->getPrice() << "\n";
    delete order;
}

void FinishingState::cancel(Order* order){
    std::cout << "Cannot cancel an order that is already made.\n";
}
