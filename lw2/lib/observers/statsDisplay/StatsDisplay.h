#ifndef LW2_STATSDISPLAY_H
#define LW2_STATSDISPLAY_H

#include "../../weatherData/WeatherInfo.h"
#include "../IObserver.h"
#include "../../measurementStatsView/MeasurementStatsView.h"
#include <algorithm>
#include <climits>
#include <memory>

class StatsDisplay : public IObserver<WeatherInfo>
{
private:
    void Update(WeatherInfo const& data) override;

    MeasurementStatsView m_temperatureView = MeasurementStatsView("Temperature");;
    MeasurementStatsView m_humidityView = MeasurementStatsView("Humidity");
    MeasurementStatsView m_pressureView = MeasurementStatsView("Pressure");
};

#endif //LW2_STATSDISPLAY_H
