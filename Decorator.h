//
// Created by pavan on 2025/08/31.
//

#ifndef COS214_DECORATOR_H
#define COS214_DECORATOR_H


class Decorator : public PizzaComponent {
    public:
        virtual void add(PizzaComponent* pizza);

    private:
        PizzaComponent* pizza;
};


#endif //COS214_DECORATOR_H