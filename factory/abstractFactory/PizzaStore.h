#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include <iostream>
#include <string>
#include "Pizza.h"
#include "IngredientFactory.h"

using namespace std;

class PizzaStore{
public:
    /* 模板方法：由子类实现 */
    virtual Pizza * createPizza(const string & s) = 0;

    Pizza * orderPizza(const string & s){
        Pizza * pizza;
        pizza = createPizza(s);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        return pizza;
    }
};



class SouthPizzaStore: public PizzaStore{
public:
    Pizza * createPizza(const string & s) override{
        Pizza * pizza;

        SouthIngredientFactory southFactory;

        if(s == "salt")
            pizza = new SouthSaltPizza(southFactory);

        else if(s == "sugar")
            pizza = new SouthSugarPizza(southFactory);
            
        return pizza;
    }
};


class NorthPizzaStore: public PizzaStore{
public:
    Pizza * createPizza(const string & s) override{
        Pizza * pizza;
        NorthIngredientFactory northFactory;

        if(s == "salt")
            pizza = new NorthSaltPizza(northFactory);

        else if(s == "sugar")
            pizza = new NorthSugarPizza(northFactory);

        return pizza;
    }
};

#endif