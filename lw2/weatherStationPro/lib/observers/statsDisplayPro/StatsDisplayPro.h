#ifndef LW2_STATSDISPLAYPRO_H
#define LW2_STATSDISPLAYPRO_H

#include "../../WeatherProInfo.h"
#include "../../../../lib/observers/IObserver.h"
#include "../../angleStatsView/AngleStatsView.h"
#include "../../../../lib/statsView/StatsView.h"

class StatsDisplayPro : public IObserver<WeatherProInfo>
{
    void Update(WeatherProInfo const& data) override;

    StatsView m_temperatureView = StatsView("Temperature");;
    StatsView m_humidityView = StatsView("Humidity");
    StatsView m_pressureView = StatsView("Pressure");
    StatsView m_windSpeed = StatsView("Wind Speed");
    AngleStatsView m_windAngle = AngleStatsView("Wind angle");
};

#endif //LW2_STATSDISPLAYPRO_H
