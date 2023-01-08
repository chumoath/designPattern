#ifndef _TURKEY_ADAPTER_H
#define _TURKEY_ADAPTER_H
#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck{
public:
    TurkeyAdapter(Turkey & turkey):m_turkey(turkey){}

    void quack() override{
        m_turkey.shout();
    }

    void fly() override{
        for(int i = 0; i < 5; ++i)
            m_turkey.fly();
    }

private:
    Turkey & m_turkey;
};

#endif