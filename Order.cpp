#include "Order.h"

Order::Order(Strategy* strategy, State* state) : strategy(strategy), state(state) {}

Order::~Order() {
    delete state;
    delete strategy;
}

double Order::applyDiscount(double percentage) {
    // Apply discount using the strategy
    if (strategy) {
        return strategy->applyDiscount();
    }
    return 0.0;
}

void Order::addToOrder(Pizza* pizza){
    order.push_back(pizza);
}

void Order::setState(State* newState){
    delete state;
    state = newState;
    std::cout << "Order state changed to: " << state->getStateName() << "\n";
}

State* Order::getState() const{
    return state;
}

std::string Order::getOrderName() const{
    std::string text = "Order:\n";
    for(Pizza* pizza : order)
        text += pizza->getName() + "\n";
    return text;
}

std::vector<Pizza*> Order::getOrder() const{
    return order;
}

double Order::getPrice() const{
    double price = 0.0;
    for(Pizza* pizza : order)
        price += pizza->getPrice();
    return price;
}

void Order::handleOrder(){
    state->handleOrder(this);
}

void Order::prepare(){
    state->prepare(this);
}

void Order::cook(){
    state->cook(this);
}

void Order::complete(){
    state->complete(this);
}

void Order::cancel(){
    state->cancel(this);
}
