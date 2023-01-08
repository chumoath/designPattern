#ifndef _OBSERVER_H
#define _OBSERVER_H

#include "Subject.h"
#include <iostream>

class Observer
{
public:
    virtual void update(void *obj) = 0;
};





#endif