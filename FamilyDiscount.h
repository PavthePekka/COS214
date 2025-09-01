//
// Created by pavan on 2025/08/24.
//

#ifndef PRAC2_FAMILYDISCOUNT_H
#define PRAC2_FAMILYDISCOUNT_H
#include "Strategy.h"

class FamilyDiscount : public Strategy {
    public:
        FamilyDiscount(double p) : Strategy(p) {}
        double applyDiscount() override;
};

#endif //PRAC2_FAMILYDISCOUNT_H