#ifndef PRAC2_MENUS_H
#define PRAC2_MENUS_H
#include <vector>
#include <iostream>
#include "Observer.h"
#include "Pizza.h"

class Menus {
    protected:
        std::vector<Observer*> observers;
        std::vector<Pizza*> pizzas;
    public:
        virtual ~Menus();
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        void addPizza(Pizza* pizza);
        void removePizza(Pizza* pizza);

        virtual void notifyObservers(std::string message) = 0;
};


#endif