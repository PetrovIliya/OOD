#include "lib/WeatherStationDuo.hpp"
#include "../lib/observers/display/Display.h"
#include "../lib/observers/statsDisplay/StatsDisplay.h"

int main()
{
    WeatherStationDuo ws;

    Display display;
    ws.RegisterObserver(display, 2);

    StatsDisplay statsDisplay;
    ws.RegisterObserver(statsDisplay, 1);

    ws.GetInsideData().SetMeasurements(3, 0.7, 760);
    ws.GetInsideData().SetMeasurements(5, 1.7, 7660);
    ws.GetOutsideData().SetMeasurements(4, 0.8, 761);
    return 0;
}