//
// Created by pavan on 2025/08/24.
//
#include "ExtraCheese.h"
ExtraCheese::ExtraCheese() : Decorator() {
   
}




void ExtraCheese::printPizza() {
    std::cout << "Name: " << getName() << "Price: " << getPrice() << std::endl;
    Decorator::printPizza();
    
}

std::string ExtraCheese::getName() {
    return "Extra Cheese";
}

double ExtraCheese::getPrice() {
    return 1.5;
}