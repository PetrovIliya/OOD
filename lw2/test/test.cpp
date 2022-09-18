#include <catch2/catch_test_macros.hpp>
#include "../lib/weatherData/WeatherData.h"
#include "lib/TestPriorityObserver.h"
#include "lib/TestSelfDeleteObserver.h"

template <typename T>
class TestObserver : public IObserver<T>
{
public:
    void Update(T const& data)
    {
    }

    ~TestObserver() = default;
};


TEST_CASE( "Priority notification", "[priority]" ) {
    WeatherData data;
    std::vector<const TestPriorityObserver*> dataArr;
    TestPriorityObserver firstObserver(&dataArr);
    TestPriorityObserver secondObserver(&dataArr);
    data.RegisterObserver(firstObserver, 2);
    data.RegisterObserver(secondObserver, 1);
    data.SetMeasurements(1, 1, 1);

    REQUIRE(dataArr.size() == 2);
    REQUIRE(dataArr[0] == &secondObserver);
    REQUIRE(dataArr[1] == &firstObserver);
}

TEST_CASE( "Self Replace Observer With Priority", "[self-replace--priority]" ) {
    WeatherData data;
    std::vector<const TestPriorityObserver*> dataArr;
    TestPriorityObserver observer(&dataArr);
    data.RegisterObserver(observer, 2);
    data.RegisterObserver(observer, 2);
    data.RegisterObserver(observer, 1);
    data.RegisterObserver(observer, 1);

    data.SetMeasurements(1, 1, 1);

    REQUIRE(dataArr.size() == 2);
    REQUIRE(dataArr[0] == &observer);
    REQUIRE(dataArr[1] == &observer);
}

TEST_CASE( "Self delete", "[self-delete]" ) {
    WeatherData data;
    TestSelfDeleteObserver testObs1(data);
    TestObserver<WeatherInfo> obs;
    TestSelfDeleteObserver testObs2(data);
    data.RegisterObserver(testObs1, 1);
    data.RegisterObserver(obs, 1);
    data.RegisterObserver(testObs2, 1);
    data.SetMeasurements(1, 1, 1);
}