#ifndef PRAC2_SPECIALSMENU_H
#define PRAC2_SPECIALSMENU_H
#include "Menus.h"

class SpecialsMenu : public Menus{
    public:
        virtual void notifyObservers(std::string message);
};

#endif
