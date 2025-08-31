#ifndef ORDER_H
#define ORDER_H

#include "Strategy.h"
class Order {
public:
    Order(Strategy* strategy, State* state);
    double applyDiscount(double percentage);
    void request();
private:
    State* state;
    Strategy* strategy;
};

#endif 