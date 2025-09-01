#ifndef STRATEGY_H
#define STRATEGY_H

#include <string>

class Strategy {
    public:
        Strategy(double p) : price(p) {}
        virtual double applyDiscount() = 0;
        void setPrice(double p) { price = p; }
    protected:
        double price;
};

#endif // STRATEGY_H