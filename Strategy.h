#ifndef STRATEGY_H
#define STRATEGY_H

#include <string>

class Strategy {
    public:
        Strategy(double p) : price(p) {}
        virtual double applyDiscount() = 0;
    protected:
        double price;
};

#endif // STRATEGY_H