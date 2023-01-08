#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include <iostream>
#include <string>
#include "Pizza.h"

using namespace std;

class PizzaStore{
public:
    /* 模板方法：由子类实现 */
    virtual Pizza * createPizza(const string & s) = 0;

    void bake(){
        cout << "bake pizza" << endl;
    }

    void cut(){
        cout << "cut pizza" << endl;
    }

    Pizza * orderPizza(const string & s){

        Pizza * pizza;
        pizza = createPizza(s);
        bake();
        cut();
        return pizza;
    }
};



class SouthPizzaStore: public PizzaStore{
public:
    Pizza * createPizza(const string & s) override{
        Pizza * pizza;
        if(s == "salt"){
            cout << "SouthSaltPizza" << endl;
            pizza = new SouthSaltPizza();
        }
        else if(s == "sugar"){
            cout << "SouthSugarPizza" << endl;

            pizza = new SouthSugarPizza();
        }
        return pizza;
    }
};


class NorthPizzaStore: public PizzaStore{
public:
    Pizza * createPizza(const string & s) override{
        Pizza * pizza;
        if(s == "salt"){
            cout << "NorthSaltPizza" << endl;
            pizza = new NorthSaltPizza();
        }
        else if(s == "sugar"){
            cout << "NorthSugarPizza" << endl;
            pizza = new NorthSugarPizza();
        }
        return pizza;
    }
};

#endif