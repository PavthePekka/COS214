#include "ToppingGroup.h"

ToppingGroup::ToppingGroup(double price, std::string name) : PizzaComponent(price, name){}

ToppingGroup::~ToppingGroup(){
    for(std::vector<PizzaComponent*>::const_iterator it = toppings.begin(); it != toppings.end(); ++it)
        delete *it;
}

void ToppingGroup::add(PizzaComponent* component){
    toppings.push_back(component);
}

double ToppingGroup::getPrice() const{
    double total = 0.0;
    for(std::vector<PizzaComponent*>::const_iterator it = toppings.begin(); it != toppings.end(); ++it)
        total += (*it)->getPrice();
    return total;
}

std::string ToppingGroup::getName() const{
    std::string result = name + " (";
    for(int i = 0; i < toppings.size(); ++i){
        if(i > 0)
            result += " ,";
        result += toppings[i]->getName();
    }
    result += ")";
    return result;
}
