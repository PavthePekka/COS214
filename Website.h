#ifndef PRAC2_WEBSITE_H
#define PRAC2_WEBSITE_H
#include "Observer.h"

class Website : public Observer{
    public:
        virtual void update(std::string message);
};

#endif