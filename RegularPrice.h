//
// Created by pavan on 2025/08/24.
//

#ifndef PRAC2_REGUARPRICE_H
#define PRAC2_REGUARPRICE_H

#include "Strategy.h"
class RegularPrice : public Strategy {
    public:
        RegularPrice(double p) : Strategy(p) {}
        double applyDiscount() override;
};

#endif //PRAC2_REGUARPRICE_H
