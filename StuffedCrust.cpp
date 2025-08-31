//
// Created by pavan on 2025/08/24.
//

#include "StuffedCrust.h"

StuffedCrust::StuffedCrust() : Decorator() {

}

void StuffedCrust::printPizza() {
    std::cout << "Name: " << getName() << " Price: " << getPrice() << std::endl;
    Decorator::printPizza();
}

std::string StuffedCrust::getName() {
    return "Stuffed Crust";
}

double StuffedCrust::getPrice() {
    return 20.00;
}
