#include "WeatherStationDisplay.h"

void WeatherStationDisplay::Update(const WeatherStationInfo &data) {
	m_insideTemperatureView.UpdateStats(data.temperature);
	m_insideHumidityView.UpdateStats(data.humidity);
	m_insidePressureView.UpdateStats(data.pressure);

	m_outsideTemperatureView.UpdateStats(data.temperature);
	m_outsideHumidityView.UpdateStats(data.humidity);
	m_outsidePressureView.UpdateStats(data.pressure);

	m_insideTemperatureView.DisplayStats();
	m_insideTemperatureView.DisplayStats();
	m_insideTemperatureView.DisplayStats();

	m_outsideTemperatureView.DisplayStats();
	m_outsideHumidityView.DisplayStats();
	m_outsidePressureView.DisplayStats();
}
