//
// Created by pavan on 2025/08/31.
//

#include "Decorator.h"

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
}}