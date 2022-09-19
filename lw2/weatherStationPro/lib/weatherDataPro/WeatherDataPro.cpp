#include "WeatherDataPro.h"

double WeatherDataPro::GetTemperature() const
{
    return m_temperature;
}

double WeatherDataPro::GetHumidity() const
{
    return m_humidity;
}

double WeatherDataPro::GetPressure() const
{
    return m_pressure;
}

double WeatherDataPro::GetWindSpeed() const
{
    return m_windSpeed;
}

double WeatherDataPro::GetWindAngle() const
{
    return m_windAngle;
}

void WeatherDataPro::MeasurementsChanged()
{
    NotifyObservers();
}

void WeatherDataPro::SetMeasurements(double temp, double humidity, double pressure, double windSpeed, double windAngle)
{
    m_humidity = humidity;
    m_temperature = temp;
    m_pressure = pressure;
    m_windSpeed = windSpeed;
    m_windAngle = windAngle;

    MeasurementsChanged();
}

WeatherProInfo WeatherDataPro::GetChangedData() const
{
    WeatherProInfo info;
    info.temperature = GetTemperature();
    info.humidity = GetHumidity();
    info.pressure = GetPressure();
    info.windSpeed = GetWindSpeed();
    info.windAngle = GetWindAngle();
    return info;
}