#ifndef _PIZZA_H
#define _PIZZA_H
#include <string>
#include "IngredientFactory.h"
#include "Ingredient.h"
#include <iostream>
using namespace std;

class Pizza{
public:
    virtual void prepare(){
        cout << "prepare pizza" << endl;
    }

    virtual void bake(){
        cout << "bake pizza" << endl;
    }

    virtual void cut(){
        cout << "cut pizza" << endl;
    }

    string & getName(){ return name;}
    
protected:
    string name;
};


class NorthSugarPizza: public Pizza{
public:
    NorthSugarPizza(IngredientFactory & factory)
        : m_factory(factory)
    {
        name = "north sugar pizza";
        m_sugar = m_factory.createSugar();
    }

    void prepare() override{
        cout << "preparing flour" << endl;
        cout << "preparing sauce" << endl;
        cout << "adding north sugar" << endl;
    }

private:
    IngredientFactory & m_factory;
    Sugar * m_sugar;
};

class NorthSaltPizza: public Pizza{
public:
    NorthSaltPizza(IngredientFactory & factory)
        : m_factory(factory)
    {
        name = "north salt pizza";
        m_salt = m_factory.createSalt();
    }

    void prepare() override{
        cout << "preparing flour" << endl;
        cout << "preparing sauce" << endl;
        cout << "adding north salt" << endl;
    }

private:
    IngredientFactory & m_factory;
    Salt * m_salt;
};

class SouthSugarPizza: public Pizza{
public:
    SouthSugarPizza(IngredientFactory & factory)
        : m_factory(factory)
    {
        name = "south sugar pizza";
        m_sugar = m_factory.createSugar();
    }

    void prepare() override{
        cout << "preparing flour" << endl;
        cout << "preparing sauce" << endl;
        cout << "adding south sugar" << endl;
    }

private:
    IngredientFactory & m_factory;
    Sugar * m_sugar;
};

class SouthSaltPizza: public Pizza{
public:
    SouthSaltPizza(IngredientFactory & factory)
        : m_factory(factory)
    {
        name = "south salt pizza";
        m_salt = m_factory.createSalt();
    }

    void prepare() override{
        cout << "preparing flour" << endl;
        cout << "preparing sauce" << endl;
        cout << "adding south salt" << endl;
    }

private:
    IngredientFactory & m_factory;
    Salt * m_salt;
};

#endif