#ifndef LW2_WEATHERSTATIONDISPLAY_H
#define LW2_WEATHERSTATIONDISPLAY_H

#include "../../../../lib/observers/IObserver.h"
#include "../../../../lib/statsView/StatsView.h"
#include "../../WeatherData/WeatherStationInfo.h"
#include "../../statsView/WeatherStationView.h"

class WeatherStationDisplay: public IObserver<WeatherStationInfo>
{
private:
	/* Метод Update сделан приватным, чтобы ограничить возможность его вызова напрямую
		Классу CObservable он будет доступен все равно, т.к. в интерфейсе IObserver он
		остается публичным
	*/
	void Update(WeatherStationInfo const& data) override;

	WeatherStationView m_insideTemperatureView = WeatherStationView("Temperature", "inside");
	WeatherStationView m_insideHumidityView = WeatherStationView("Humidity", "inside");
	WeatherStationView m_insidePressureView = WeatherStationView("Pressure", "inside");

	WeatherStationView m_outsideTemperatureView = WeatherStationView("Temperature", "outside");
	WeatherStationView m_outsideHumidityView = WeatherStationView("Humidity", "outside");
	WeatherStationView m_outsidePressureView = WeatherStationView("Pressure", "outside");
};

#endif // LW2_WEATHERSTATIONDISPLAY_H
