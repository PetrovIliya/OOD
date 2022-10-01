#include <catch2/catch_test_macros.hpp>
#include "../lib/weatherData/WeatherData.h"
#include "lib/TestPriorityObserver.h"
#include "lib/TestSelfDeleteObserver.h"
#include "../weatherStationDuo/lib/WeatherStationDuo.hpp"

template <typename T>
class TestObserver : public IObserver<T>
{
public:
    void Update(T const& data)
    {
        lastInfo = data;
    }

    ~TestObserver() = default;

    T GetLastInfo() const
    {
        return lastInfo;
    }

private:
    T lastInfo;
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

TEST_CASE("Duo station", "duo-station")
{
	WeatherStationData insideData;
	WeatherStationData outsideData;

	WeatherStationDuo ws(insideData, outsideData);

    TestObserver<WeatherStationInfo> firstObserver;
    ws.RegisterObserver(firstObserver, 1);

    ws.GetInsideData().SetMeasurements(1, 2, 3);

    REQUIRE(firstObserver.GetLastInfo().humidity == ws.GetInsideData().GetHumidity());
    REQUIRE(firstObserver.GetLastInfo().temperature == ws.GetInsideData().GetTemperature());
    REQUIRE(firstObserver.GetLastInfo().pressure == ws.GetInsideData().GetPressure());

    REQUIRE(firstObserver.GetLastInfo().temperature == 1);
    REQUIRE(firstObserver.GetLastInfo().humidity == 2);
    REQUIRE(firstObserver.GetLastInfo().pressure == 3);

    REQUIRE(ws.GetInsideData().GetTemperature() == 1);
    REQUIRE(ws.GetInsideData().GetHumidity() == 2);
    REQUIRE(ws.GetInsideData().GetPressure() == 3);

    ws.GetOutsideData().SetMeasurements(2, 3, 4);

    REQUIRE(firstObserver.GetLastInfo().humidity == ws.GetOutsideData().GetHumidity());
    REQUIRE(firstObserver.GetLastInfo().temperature == ws.GetOutsideData().GetTemperature());
    REQUIRE(firstObserver.GetLastInfo().pressure == ws.GetOutsideData().GetPressure());

    REQUIRE(firstObserver.GetLastInfo().temperature == 2);
    REQUIRE(firstObserver.GetLastInfo().humidity == 3);
    REQUIRE(firstObserver.GetLastInfo().pressure == 4);

    REQUIRE(ws.GetOutsideData().GetTemperature() == 2);
    REQUIRE(ws.GetOutsideData().GetHumidity() == 3);
    REQUIRE(ws.GetOutsideData().GetPressure() == 4);
}

