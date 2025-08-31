#include "PizzaMenu.h"

void PizzaMenu::notifyObservers(std::string message){
    for (std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); ++it)
        (*it)->update(message + " (Regular Menu)");
}
