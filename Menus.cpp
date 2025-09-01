#include "Menus.h"

Menus::~Menus(){
    for(int i = 0; i < observers.size(); i++){
        if(observers[i]){
            delete observers[i];
            observers[i] = NULL;
        }
    }
    for(int i = 0; i < pizzas.size(); i++){
        if(pizzas[i]){
            delete pizzas[i];
            pizzas[i] = NULL;
        }
    }
}

void Menus::addObserver(Observer* observer){
    observers.push_back(observer);
}

void Menus::removeObserver(Observer* observer){
    for (std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break; 
        }
    }
}

void Menus::addPizza(Pizza* pizza){
    pizzas.push_back(pizza);
    notifyObservers("Added pizza: " + pizza->getName());
}

void Menus::removePizza(Pizza* pizza){
    for (std::vector<Pizza*>::iterator it = pizzas.begin(); it != pizzas.end(); ++it) {
        if (*it == pizza) {
            pizzas.erase(it);
            notifyObservers("Removed pizza: " + pizza->getName());
            break;
        }
    }
}
