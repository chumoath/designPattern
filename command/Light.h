#ifndef _LIGHT_H
#define _LIGHT_H

#include <string>
#include <iostream>
using namespace std;

class Light{
public:
    Light(const string & name){
        m_name = name + " light";
    }

    void lightOn(){
        cout << m_name << " " << "on" << endl;
    }

    void lightOff(){
        cout << m_name << " " << "off" << endl;
    }
private:
    string m_name;
};

#endif