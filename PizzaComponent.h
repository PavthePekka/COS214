//
// Created by pavan on 2025/08/24.
//

#ifndef PRAC2_PIZZACOMPONENT_H
#define PRAC2_PIZZACOMPONENT_H


class PizzaComponent
{
    private:
        double price;
        std::string name;

    public:
        virtual std::string getName() = 0;
        virtual double getPrice() = 0;
        virtual void printPizza();
};


#endif //PRAC2_PIZZACOMPONENT_H