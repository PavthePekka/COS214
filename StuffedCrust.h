//
// Created by pavan on 2025/08/24.
//

#ifndef PRAC2_STUFFEDCRUST_H
#define PRAC2_STUFFEDCRUST_H
#include "Decorator.h"

class StuffedCrust : public Decorator {
public:
    StuffedCrust();
    void printPizza() override;
    std::string getName() override;
    double getPrice() override;
};


#endif //PRAC2_STUFFEDCRUST_H