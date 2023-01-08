#ifndef _DUCK_H
#define _DUCK_H

#include <iostream>
using namespace std;

class Duck{
public:
    virtual void quack(){
        cout << "gua gua" << endl;
    }

    virtual void fly(){
        cout << "I'm flying" << endl;
    }
};

#endif