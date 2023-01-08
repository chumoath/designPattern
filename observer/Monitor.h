#ifndef _MOINTOR_H
#define _MOINTOR_H

#include "Subject.h"
#include "WeatherData.h"

class ThirdPartMonitor : public Observer
{
public:
    /* 只有 非静态数据成员 才能在 初始化列表中使用 */
    /*   可以在构造器中 直接初始化 */

    ThirdPartMonitor(Subject * weatherData)
    {
        this->m_weatherData = weatherData;
        weatherData->addObserver(this);
    }

    void update(void *obj) override
    {
        Weather *w  = static_cast<Weather*>(obj);
        heat = w->heat;
        shi = w->shi;

        display();
    }

    void display()
    {
        std::cout << "heat:" << heat << std::endl;
        std::cout << "shi:" << shi << std::endl;
    }

private:
    Subject *m_weatherData;
    
    double heat;
    double shi;
};

#endif