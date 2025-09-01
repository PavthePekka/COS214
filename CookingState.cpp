#include "CookingState.h"

CookingState::CookingState() : State("Cooking"){}

void CookingState::handleOrder(Order* order){
    std::cout << "Order already received and being cooked.\n";
}

void CookingState::prepare(Order* order){
    std::cout << "Pizza already prepared. Moving back to Preparing state for possible modifications.\n";
    order->setState(new PreparingState());
}

void CookingState::cook(Order* order){
    std::cout << "Cooking order. Moving to Finished state.\n";
    order->setState(new FinishingState());
}

void CookingState::complete(Order* order){
    std::cout << "Cannot complete until cooking is finished.\n";
}

void CookingState::cancel(Order* order){
    std::cout << "Cannot cancel order while cooking. Please wait until finished.\n";
}
