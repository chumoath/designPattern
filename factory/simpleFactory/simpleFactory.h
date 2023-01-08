#ifndef _SIMPLE_FACTORY_H
#define _SIMPLE_FACTORY_H

#include "Pizza.h"
#include <string>

class PizzaFactory{
public:
    Pizza * createPizza(const std::string & s){
        Pizza * pizza;
        if(s == "sugar")
            pizza = new SugarPizza();
        else if(s == "salt")
            pizza = new SaltPizza();
        return pizza;
    }
};


#endif