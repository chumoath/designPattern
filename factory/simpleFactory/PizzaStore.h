#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include <iostream>
#include <string>
#include "simpleFactory.h"
#include "Pizza.h"

using namespace std;

class PizzaStore{
public:
    PizzaStore(PizzaFactory & factory)
        :m_factory(factory)
    {}

    Pizza * prepare(const string & s){
        return m_factory.createPizza(s);
    };

    void bake(){
        cout << "bake pizza" << endl;
    }

    void cut(){
        cout << "cut pizza" << endl;
    }

    Pizza * orderPizza(const string & s){
        Pizza * pizza;
        prepare(s);
        bake();
        cut();
        return pizza;
    }

private:
    PizzaFactory & m_factory;
};

#endif