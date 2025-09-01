#include "PreparingState.h"

OrderState::OrderState() : State("Ordering"){}

void OrderState::handleOrder(Order* order){
    std::cout << "Placing order for:\n" << order->getOrderName() << 
    "\nReceived order. Moving to Preparing state.\n";
    order->setState(new PreparingState());
}

void OrderState::prepare(Order* order){
    std::cout << "Order not yet processed. Please confirm order first.\n";
}

void OrderState::cook(Order* order){
    std::cout << "Cannot cook. Order not yet processed.\n";
}

void OrderState::complete(Order* order){
    std::cout << "Cannot complete. Order not yet processed.\n";
}

void OrderState::cancel(Order* order){
    std::cout << "Cancelling the following order:\n" << order->getOrderName() << "\n";
    delete order;
}
