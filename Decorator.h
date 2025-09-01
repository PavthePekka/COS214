//
// Created by pavan on 2025/08/31.
//

#ifndef COS214_DECORATOR_H
#define COS214_DECORATOR_H
#include "PizzaComponent.h"

class Decorator : public PizzaComponent {
    public:
        void printPizza() override;

    private:
        PizzaComponent* pizza;
};


#endif //COS214_DECORATOR_H