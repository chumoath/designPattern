#ifndef _COFFEE_H
#define _COFFEE_H

#include "CoffeeJuice.h"
#include <iostream>
using namespace std;

class Coffee: public CoffeeJuice{
public:
    void putMaterial() override{
        cout << "put coffee" << endl;
    }

    void putOther() override{
        cout << "put milk and sugar" << endl;
    }

    bool hook() override{
        if(getInput() == "y")
            return true;
        return false;
    }

    string getInput(){
        string in;
        while(true){
            cout << "Do you need to add some milk and sugar: y/n" << endl;
            cin >> in;
            
            if(in == "y" || in == "n")
                return in;    
        }
    }
};

#endif