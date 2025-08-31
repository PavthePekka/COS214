#ifndef PRAC2_PIZZA_H
#define PRAC2_PIZZA_H
#include <string>

class Pizza {
    private:
        std::string name;
        double price;
    public:
        Pizza(double price, std::string name);
        std::string getName() const;
        double getPrice() const;
        void printPizza() const;
};


#endif