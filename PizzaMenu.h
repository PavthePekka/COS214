#ifndef PRAC2_PIZZAMENU_H
#define PRAC2_PIZZAMENU_H
#include "Menus.h"

class PizzaMenu : public Menus{
    public:
        virtual void notifyObservers(std::string message);
};


#endif                           