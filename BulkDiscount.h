//
// Created by pavan on 2025/08/24.
//

#ifndef PRAC2_BULKDISCOUNT_H
#define PRAC2_BULKDISCOUNT_H

#include "Strategy.h"
class BulkDiscount : public Strategy{
    public:
        BulkDiscount(double p) : Strategy(p) {}
        double applyDiscount() override;
};


#endif //PRAC2_BULKDISCOUNT_H