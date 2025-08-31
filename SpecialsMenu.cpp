#include "SpecialsMenu.h"

void SpecialsMenu::notifyObservers(std::string message){
    for (std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); ++it)
        (*it)->update(message + " (Specials Menu)");
}
