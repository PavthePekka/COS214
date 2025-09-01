#ifndef PRAC2_ORDERINGSTATE_H
#define PRAC2_ORDERINGSTATE_H
#include "State.h"
class OrderState : public State{
public:
    OrderState();
    virtual ~OrderState(){}
    virtual void handleOrder(Order* order) override;
    virtual void prepare(Order* order);
    virtual void cook(Order* order) override;
    virtual void complete(Order* order) override;
    virtual void cancel(Order* order) override;
};

#endif