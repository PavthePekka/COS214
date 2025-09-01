#ifndef PRAC2_TOPPINGGROUP_H
#define PRAC2_TOPPINGGROUP_H

#include <vector>
#include "PizzaComponent.h"

class ToppingGroup : public PizzaComponent{
    private:
        std::vector<PizzaComponent*> toppings;
        std::string name;
        double price;
    public:
        ToppingGroup(double price, std::string name);
        virtual ~ToppingGroup();
        void add(PizzaComponent* component);
        virtual double getPrice() const override;
        virtual std::string getName() const override;
};

#endif