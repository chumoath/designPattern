#ifndef _COFFEE_JUICE_H
#define _COFFEE_JUICE_H

#include <iostream>
using namespace std;

class CoffeeJuice{
public:
    void prepare(){
        boil();
        putMaterial();
        putWater();
        
        if(hook())
            putOther();
    }

    void boil(){
        cout << "water is boiled" << endl;
    }

    virtual void putMaterial() = 0;

    void putWater(){
        cout << "put boiled water to cup" << endl;
    }

    virtual void putOther() = 0;

    /* 钩子函数：影响算法 */
    virtual bool hook(){
        return true;
    }
};

#endif