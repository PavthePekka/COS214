#include "Topping.h"

Topping::Topping(double price, std::string name) : PizzaComponent(price, name){}

double Topping::getPrice() const{
    return price;
}

std::string Topping::getName() const{
    return name;
}
