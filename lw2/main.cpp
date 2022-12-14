
#include "lib/weatherData/WeatherData.h"
#include "lib/observers/display/Display.h"
#include "lib/observers/statsDisplay/StatsDisplay.h"

int main()
{
    WeatherData wd;

    Display display;
    wd.RegisterObserver(display, 2);

    StatsDisplay statsDisplay;
    wd.RegisterObserver(statsDisplay, 1);

    wd.SetMeasurements(3, 0.7, 760);
    wd.SetMeasurements(4, 0.8, 761);

    wd.RemoveObserver(statsDisplay);

    wd.SetMeasurements(10, 0.8, 761);
    wd.SetMeasurements(-10, 0.8, 761);
    return 0;
};