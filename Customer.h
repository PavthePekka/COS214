#ifndef PRAC2_CUSTOMER_H
#define PRAC2_CUSTOMER_H
#include "Observer.h"

class Customer : public Observer{
    public:
        virtual void update(std::string message);
};

#endif