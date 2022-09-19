#ifndef LW2_STATSDISPLAY_H
#define LW2_STATSDISPLAY_H

#include "../../weatherData/WeatherInfo.h"
#include "../IObserver.h"
#include "../../statsView/StatsView.h"
#include <algorithm>
#include <climits>
#include <memory>

class StatsDisplay : public IObserver<WeatherInfo>
{
private:
    void Update(WeatherInfo const& data) override;

    StatsView m_temperatureView = StatsView("Temperature");;
    StatsView m_humidityView = StatsView("Humidity");
    StatsView m_pressureView = StatsView("Pressure");
};

#endif //LW2_STATSDISPLAY_H
