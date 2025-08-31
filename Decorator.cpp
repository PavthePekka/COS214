//
// Created by pavan on 2025/08/31.
//

#include "Decorator.h"

Decorator::Decorator() : pizza(nullptr) {}

Decorator::~Decorator() {
    delete pizza;
}

void Decorator::add(PizzaComponent* pizza){
    if(pizza == nullptr){
        this->pizza = pizza;
    }
    else{
        this->pizza->add(pizza);
    }
}

void Decorator::printPizza(){
    pizza->printPizza();
}

