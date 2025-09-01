//
// Created by pavan on 2025/08/24.
//

#ifndef PRAC2_EXTRACHEESE_H
#define PRAC2_EXTRACHEESE_H


#include "ExtraCheese.h"
#include "Decorator.h"

class ExtraCheese : public Decorator {
    public:
        void printPizza() override;
        std::string getName() override;
        double getPrice() override;
};


#endif //PRAC2_EXTRACHEESE_H