#ifndef _INGREDIENT_FACTORY_H
#define _INGREDIENT_FACTORY_H

#include "Ingredient.h"

class IngredientFactory{
public:
    virtual Salt * createSalt() = 0;
    virtual Sugar * createSugar() = 0;
};


class NorthIngredientFactory : public IngredientFactory{
public:
    Salt* createSalt() override{
        return new NorthSalt();
    }

    Sugar* createSugar() override{
        return new NorthSugar();
    }

};

class SouthIngredientFactory:public IngredientFactory{
public:
    Salt* createSalt() override{
        return new SouthSalt();
    }

    Sugar* createSugar() override{
        return new SouthSugar();
    }

};

#endif