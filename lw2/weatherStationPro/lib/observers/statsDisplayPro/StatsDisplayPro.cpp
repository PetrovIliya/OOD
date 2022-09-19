#include "StatsDisplayPro.h"

void StatsDisplayPro::Update(const WeatherProInfo &data)
{
    m_temperatureView.UpdateStats(data.temperature);
    m_humidityView.UpdateStats(data.humidity);
    m_pressureView.UpdateStats(data.pressure);
    m_windSpeed.UpdateStats(data.windSpeed);
    m_windAngle.UpdateStats(data.windAngle);

    m_temperatureView.DisplayStats();
    m_humidityView.DisplayStats();
    m_pressureView.DisplayStats();
    m_windSpeed.DisplayStats();
    m_windAngle.DisplayStats();
}
