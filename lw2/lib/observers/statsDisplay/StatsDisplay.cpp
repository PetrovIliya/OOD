#include "StatsDisplay.h"

void StatsDisplay::Update(const WeatherInfo &data) {
    m_temperatureView.UpdateStats(data.temperature);
    m_humidityView.UpdateStats(data.humidity);
    m_pressureView.UpdateStats(data.pressure);

    m_temperatureView.DisplayStats();
    m_humidityView.DisplayStats();
    m_pressureView.DisplayStats();
}
