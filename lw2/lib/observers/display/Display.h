#ifndef LW2_DISPLAY_H
#define LW2_DISPLAY_H

#include "../../weatherData/WeatherInfo.h"
#include "../IObserver.h"

class Display: public IObserver<WeatherInfo>
{
private:
    /* Метод Update сделан приватным, чтобы ограничить возможность его вызова напрямую
        Классу CObservable он будет доступен все равно, т.к. в интерфейсе IObserver он
        остается публичным
    */
    void Update(WeatherInfo const& data) override;
};

#endif //LW2_DISPLAY_H
