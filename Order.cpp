#include "Order.h"

Order::Order(Strategy* strategy, State* state, bool isFamily) : strategy(strategy), state(state), isFamily(isFamily) {}

Order::~Order() {
    if(state){
        delete state;
        state = NULL;
    }
    if(strategy){
        delete strategy;
        strategy = NULL;
    }
}

double Order::applyDiscount(double percentage) {
    // Apply discount using the strategy
    if (strategy)
        return strategy->applyDiscount();
    return 0.0;
}

void Order::addToOrder(PizzaComponent* pizza){
    order.push_back(pizza);
    if(isFamily){
        if(strategy){
            delete strategy;
            strategy = NULL;
        }
        strategy = new FamilyDiscount(getPrice());
    }
    else if(order.size() >= 5){
        if(strategy){
            delete strategy;
            strategy = NULL;
        }
        strategy = new BulkDiscount(getPrice());
    }
    else{
        if(strategy){
            delete strategy;
            strategy = NULL;
        }
        strategy = new RegularPrice(getPrice());
    }
}

void Order::setState(State* newState){
    if(state){
        delete state;
        state = NULL;
    }
    state = newState;
    std::cout << "Order state changed to: " << state->getStateName() << "\n";
}

State* Order::getState() const{
    return state;
}

std::string Order::getOrderName() const{
    std::string text = "Order:\n";
    for(PizzaComponent* pizza : order)
        text += pizza->getName() + "\n";
    return text;
}

std::vector<PizzaComponent*> Order::getOrder() const{
    return order;
}

double Order::getPrice() const{
    double price = 0.0;
    for(PizzaComponent* pizza : order)
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
