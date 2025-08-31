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
