#include "Monitor.h"
#include "WeatherData.h"

int main(int argc, char const *argv[])
{
    WeatherData * weather = new WeatherData();

    ThirdPartMonitor * monitor = new ThirdPartMonitor(weather);

    weather->setMeasureData(5.0, 2.0);

    delete weather;
    delete monitor;

    return 0;
}
