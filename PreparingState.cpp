#include "PreparingState.h"

PreparingState::PreparingState() : State("Preparing"){}

void PreparingState::handleOrder(Order* order){
    std::cout << "Order already received. Preparing in progress.\n";
}

void PreparingState::prepare(Order* order){
    std::cout << "Preparing:\n" << order->getOrderName() << ". Moving to Cooking state.\n";
    order->setState(new CookingState());
}

void PreparingState::cook(Order* order){
    std::cout << "Not yet cooking. Still preparing order.\n";
}

void PreparingState::complete(Order* order){
    std::cout << "Cannot complete. Pizza is still being prepared.\n";
}

void PreparingState::cancel(Order* order){
    std::cout << "Order cancelled during preparation. Moving back to Order state.\n";
    if(order){
        delete order;
        order = NULL;
    }
}
