#ifndef PRAC2_PIZZACOMPONENT_H
#define PRAC2_PIZZACOMPONENT_H

#include <string>

class PizzaComponent{
    private:
        double price;
        std::string name;
    public:
        PizzaComponent(double price, std::string name);
        virtual ~PizzaComponent();
        virtual std::string getName() const = 0;
        virtual double getPrice() const = 0;
};

#endif  
