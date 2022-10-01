#ifndef LW2_WEATHERSTATIONDATA_H
#define LW2_WEATHERSTATIONDATA_H

#include "../../../lib/observable/BaseObservable.hpp"
#include "WeatherStationInfo.h"

class WeatherStationData : public BaseObservable<WeatherStationInfo>
{
public:
	// Температура в градусах Цельсия
	double GetTemperature()const;

	// Относительная влажность (0...100)
	double GetHumidity()const;

	// Атмосферное давление (в мм.рт.ст)
	double GetPressure() const;

	std::string GetLocation() const;

	void MeasurementsChanged();

	void SetMeasurements(double temp, double humidity, double pressure);

protected:
	WeatherStationInfo GetChangedData()const override;

private:
	double m_temperature = 0.0;
	double m_humidity = 0.0;
	double m_pressure = 760.0;
};

#endif // LW2_WEATHERSTATIONDATA_H
