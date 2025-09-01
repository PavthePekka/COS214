#ifndef PRAC2_TOPPING_H
#define PRAC2_TOPPING_H
#include "PizzaComponent.h"

class Topping : public PizzaComponent{
    private:
        std::string name;
        double price;
    public:
        Topping(double price, std::string name);
        virtual double getPrice() const override;
        virtual std::string getName() const override;
};


#endif