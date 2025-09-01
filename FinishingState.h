#ifndef PRAC2_FINISHINGSTATE_H
#define PRAC2_FINISHINGSTATE_H
#include "State.h"
class FinishingState : public State{
public:
    FinishingState();
    virtual ~FinishingState(){}
    virtual void handleOrder(Order* order) override;
    virtual void prepare(Order* order);
    virtual void cook(Order* order) override;
    virtual void complete(Order* order) override;
    virtual void cancel(Order* order) override;
};

#endif