#ifndef _Weather_DATA_H
#define _Weather_DATA_H
#include "Subject.h"

class Weather{
public:
    double heat;
    double shi;
};



class WeatherData : public Subject{

public:
    void measureChange(){
        /* 传递完毕，自动销毁 */
        Weather w;
        w.heat = heat;
        w.shi = shi;
        notifyObservers(&w);
    }

    void setMeasureData(double heat, double shi){
        this->heat = heat;
        this->shi = shi;
        measureChange();
    }

private:
    double heat;
    double shi;
};


#endif