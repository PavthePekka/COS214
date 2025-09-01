#ifndef ORDER_H
#define ORDER_H

#include "Strategy.h"
#include "BulkDiscount.h"
#include "State.h"
#include "PizzaComponent.h"
#include "FamilyDiscount.h"
#include "RegularPrice.h"
#include <vector>
#include <iostream>

class Order {
public:
    Order(Strategy* strategy, State* state, bool isFamily);
    double applyDiscount(double percentage);
    void addToOrder(PizzaComponent* pizza);
    void setState(State* newState);
    State* getState() const;
    std::string getOrderName() const;
    std::vector<PizzaComponent*> getOrder() const;
    double getPrice() const;
    void handleOrder();
    void prepare();
    void cook();
    void complete();
    void cancel();

private:
    State* state;
    Strategy* strategy;
    std::vector<PizzaComponent*> order;
    bool isFamily;
};

#endif 
