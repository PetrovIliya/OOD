#ifndef LW2_TESTSELFDELETEOBSERVER_H
#define LW2_TESTSELFDELETEOBSERVER_H

#include "../../lib/weatherData/WeatherInfo.h"
#include "../../lib/observers/IObserver.h"
#include "../../lib/observable/BaseObservable.hpp"

class TestSelfDeleteObserver : public IObserver<WeatherInfo>
{
public:
    TestSelfDeleteObserver(BaseObservable<WeatherInfo>& data) : data(data)
    {
    }

    virtual ~TestSelfDeleteObserver() = default;

    virtual void Update(WeatherInfo const& data)
    {
        lastInfo = data;
        this->data.RemoveObserver(*this);
    }

private:
    BaseObservable<WeatherInfo>& data;
    WeatherInfo lastInfo;
};

#endif //LW2_TESTSELFDELETEOBSERVER_H