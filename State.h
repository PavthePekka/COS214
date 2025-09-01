#ifndef PRAC2_STATE_H
#define PRAC2_STATE_H
#include "Order.h"
#include "OrderingState.h"
#include "PreparingState.h"
#include "CookingState.h"
#include "FinishingState.h"

class State {
private:
    std::string state;
public:
    State(std::string state) {this->state = state;}
    virtual ~State(){}
    virtual void handleOrder(Order* order) = 0;
    virtual void prepare(Order* order) = 0;
    virtual void cook(Order* order) = 0;
    virtual void complete(Order* order) = 0;
    virtual void cancel(Order* order) = 0;
    std::string getStateName(){return state;}
};

#endif
