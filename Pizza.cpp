#include "Pizza.h"
#include <iostream>

Pizza::Pizza(double price, std::string name){
    this->price = price;
    this->name = name;
}

std::string Pizza::getName() const{
    return name;
}

double Pizza::getPrice() const{
    return price;
}

void Pizza::printPizza() const{
    std::cout << "Pizza: " << name << " - Price: " << price << "\n";
}
