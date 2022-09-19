#ifndef LW2_WEATHERSTATIONDUO_HPP
#define LW2_WEATHERSTATIONDUO_HPP

#include "../../lib/weatherData/WeatherData.h"

class WeatherStationDuo
{
public:
    void RegisterObserver(IObserver<WeatherInfo> & observer, int priority)
    {
        insideData.RegisterObserver(observer, priority);
        outsideData.RegisterObserver(observer, priority);
    }

    WeatherData& GetInsideData()
    {
        return insideData;
    }

    WeatherData& GetOutsideData()
    {
        return outsideData;
    }

private:
    WeatherData insideData;
    WeatherData outsideData;
};


#endif //LW2_WEATHERSTATIONDUO_HPP
