#ifndef PRAC2_OBSERVER_H
#define PRAC2_OBSERVER_H
#include <string>
#include <iostream>

class Observer {
    public:
        virtual ~Observer();
        virtual void update(std::string message) = 0;
};

#endif