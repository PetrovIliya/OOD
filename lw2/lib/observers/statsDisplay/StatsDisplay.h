#ifndef LW2_STATSDISPLAY_H
#define LW2_STATSDISPLAY_H

#include "../../weatherData/WeatherInfo.h"
#include "../IObserver.h"
#include <algorithm>
#include <climits>

class StatsDisplay : public IObserver<WeatherInfo>
{
private:
    /* Метод Update сделан приватным, чтобы ограничить возможность его вызова напрямую
    Классу CObservable он будет доступен все равно, т.к. в интерфейсе IObserver он
    остается публичным
    */
    void Update(WeatherInfo const& data) override;

    double m_minTemperature = std::numeric_limits<double>::infinity();
    double m_maxTemperature = -std::numeric_limits<double>::infinity();
    double m_accTemperature = 0;
    unsigned m_countAcc = 0;
};

#endif //LW2_STATSDISPLAY_H
