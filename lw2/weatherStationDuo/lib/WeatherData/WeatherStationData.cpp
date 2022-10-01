#include "WeatherStationData.h"

double WeatherStationData::GetTemperature() const {
	return m_temperature;
}

double WeatherStationData::GetHumidity() const {
	return m_humidity;
}

double WeatherStationData::GetPressure() const {
	return m_pressure;
}

void WeatherStationData::MeasurementsChanged() {
	NotifyObservers();
}

void WeatherStationData::SetMeasurements(double temp, double humidity, double pressure) {
	m_humidity = humidity;
	m_temperature = temp;
	m_pressure = pressure;

	MeasurementsChanged();
}

WeatherStationInfo WeatherStationData::GetChangedData() const {
	WeatherStationInfo info;
	info.temperature = GetTemperature();
	info.humidity = GetHumidity();
	info.pressure = GetPressure();
	return info;
}