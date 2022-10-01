#include "../lib/observers/display/Display.h"
#include "lib/WeatherStationDuo.hpp"
#include "lib/observer/statsDisplay//WeatherStationDisplay.h"

int main()
{
	WeatherStationData insideData;
	WeatherStationData outsideData;

    WeatherStationDuo ws(insideData, outsideData);

	WeatherStationDisplay statsDisplay;
    ws.RegisterObserver(statsDisplay, 1);

    ws.GetInsideData().SetMeasurements(3, 0.7, 760);
    ws.GetInsideData().SetMeasurements(5, 1.7, 7660);
    ws.GetOutsideData().SetMeasurements(4, 0.8, 761);
    return 0;
}