#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <list>
#include "Observer.h"
#include <algorithm>

class Subject{

public:
    void addObserver(Observer * observer){
        observers.push_back(observer);
    }

    void deleteObserver(Observer * observer){
        auto it = std::find(observers.begin(), observers.end(), observer);
        observers.erase(it);
    }

    void notifyObservers(void * obj){
        for(auto & ob : observers)
            ob->update(obj);
    }

private:
    std::list<Observer *> observers;
};

#endif