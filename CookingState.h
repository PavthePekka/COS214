#ifndef PRAC2_COOKINGSTATE_H
#define PRAC2_COOKINGSTATE_H
#include "State.h"
#include "PreparingState.h"

class CookingState : public State{
public:
    CookingState();
    virtual ~CookingState(){}
    virtual void handleOrder(Order* order) override;
    virtual void prepare(Order* order);
    virtual void cook(Order* order) override;
    virtual void complete(Order* order) override;
    virtual void cancel(Order* order) override;
};

#endif