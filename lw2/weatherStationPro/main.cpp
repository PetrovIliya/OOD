
#include "lib/weatherDataPro/WeatherDataPro.h"
#include "lib/observers/statsDisplayPro/StatsDisplayPro.h"

int main()
{
    WeatherDataPro wd;

    StatsDisplayPro displayPro;
    wd.RegisterObserver(displayPro, 1);

    wd.SetMeasurements(3, 0.7, 10, 15, 179);
    wd.SetMeasurements(3, 0.7, 10, 15, 181);
    return 0;
}
