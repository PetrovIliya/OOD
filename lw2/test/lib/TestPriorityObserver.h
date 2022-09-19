#ifndef LW2_TESTPRIORITYOBSERVER_H
#define LW2_TESTPRIORITYOBSERVER_H

#include <vector>
#include "../../lib/weatherData/WeatherInfo.h"
#include "../../lib/observers/IObserver.h"


class TestPriorityObserver : public IObserver<WeatherInfo>
{
public:
    TestPriorityObserver(std::vector<const TestPriorityObserver*>* dataArr)
    {
        this->dataArr = dataArr;
    }

    virtual ~TestPriorityObserver() = default;

    void Update(WeatherInfo const& data)
    {
        lastInfo = data;
        dataArr->push_back(this);
    };

private:
    std::vector<const TestPriorityObserver*>* dataArr;
    WeatherInfo lastInfo;
};

#endif //LW2_TESTPRIORITYOBSERVER_H
