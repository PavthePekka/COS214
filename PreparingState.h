#ifndef PRAC2_PREPARINGSTATE_H
#define PRAC2_PREPARINGSTATE_H
#include "State.h"

class PreparingState : public State{
public:
    PreparingState();
    virtual ~PreparingState(){}
    virtual void handleOrder(Order* order) override;
    virtual void prepare(Order* order);
    virtual void cook(Order* order) override;
    virtual void complete(Order* order) override;
    virtual void cancel(Order* order) override;
};

#endif