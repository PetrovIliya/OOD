#ifndef LW2_WEATHERDATAPRO_H
#define LW2_WEATHERDATAPRO_H


#include "../WeatherProInfo.h"
#include "../../../lib/observable/BaseObservable.hpp"

class WeatherDataPro : public BaseObservable<WeatherProInfo>
{
public:
    double GetTemperature() const;
    double GetHumidity() const;
    double GetPressure() const;
    double GetWindSpeed() const;
    double GetWindAngle() const;
    void MeasurementsChanged();
    void SetMeasurements(double temp, double humidity, double pressure, double windSpeed, double windAngle);

protected:
    WeatherProInfo GetChangedData() const override;

private:
    double m_temperature;
    double m_humidity;
    double m_pressure;
    double m_windSpeed;
    double m_windAngle;
};


#endif //LW2_WEATHERDATAPRO_H
