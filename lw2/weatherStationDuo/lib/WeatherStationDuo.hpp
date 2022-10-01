#ifndef LW2_WEATHERSTATIONDUO_HPP
#define LW2_WEATHERSTATIONDUO_HPP

#include <utility>

#include "../../lib/observers/IObserver.h"
#include "WeatherData/WeatherStationData.h"
#include "WeatherData/WeatherStationInfo.h"

class WeatherStationDuo
{
public:
	WeatherStationDuo(WeatherStationData insideData, WeatherStationData outsideData):
		insideData(std::move(insideData)),
		outsideData(std::move(outsideData))
	{}

    void RegisterObserver(IObserver<WeatherStationInfo> & observer, int priority)
    {
        insideData.RegisterObserver(observer, priority);
        outsideData.RegisterObserver(observer, priority);
    }

	WeatherStationData& GetInsideData()
    {
        return insideData;
    }

	WeatherStationData& GetOutsideData()
    {
        return outsideData;
    }

private:
	WeatherStationData insideData;
	WeatherStationData outsideData;
};


#endif //LW2_WEATHERSTATIONDUO_HPP
