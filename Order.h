#ifndef ORDER_H
#define ORDER_H

#include "Strategy.h"
#include "State.h"
#include "Pizza.h"
#include <vector>

class Order {
public:
    Order(Strategy* strategy, State* state);
    double applyDiscount(double percentage);
    void addToOrder(Pizza* pizza);
    void setState(State* newState);
    State* getState() const;
    std::string getOrderName() const;
    std::vector<Pizza*> getOrder() const;
    double getPrice() const;
    void handleOrder();
    void prepare();
    void cook();
    void complete();
    void cancel();

private:
    State* state;
    Strategy* strategy;
    std::vector<Pizza*> order;
};

#endif 