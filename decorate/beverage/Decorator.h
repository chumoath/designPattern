#ifndef _DECORATOR_H
#define _DECORATOR_H

#include "Beverage.h"
#include <string>
#include <iostream>

class CondimDecorator: public Beverage{
public:
    /* 所有的decorator 重新实现 getDescription */
    virtual std::string getDescription() = 0;
};


class Sugar: public CondimDecorator{
public:
    Sugar(Beverage * beverage):m_beverage(beverage){}
    ~Sugar() override {
        std::cout << "sugar delete" << std::endl;
        delete m_beverage;
    }

    std::string getDescription() override{
        return m_beverage->getDescription() + ", Sugar";
    };


    double cost() override{
        return m_beverage->cost() + .5;
    };

private:
    Beverage * m_beverage;
};



class Salt : public CondimDecorator{
public:
    Salt(Beverage * beverage):m_beverage(beverage){};

    ~Salt() override{
        std::cout << "salt delete" << std::endl;
        delete m_beverage;
    }

    std::string getDescription() override{
        return m_beverage->getDescription() + ", Salt";
    }

    double cost() override{
        return m_beverage->cost() + .3;
    }

private:
    Beverage * m_beverage;
};

#endif