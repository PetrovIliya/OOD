cmake_minimum_required(VERSION 3.23)
project(lw2)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        lw2
        main.cpp
        lib/observable/IObservable.h
        lib/observers/IObserver.h
        lib/observable/BaseObservable.hpp
        lib/weatherData/WeatherData.cpp
        lib/weatherData/WeatherData.h
        lib/weatherData/WeatherInfo.h
        lib/observers/statsDisplay/StatsDisplay.cpp
        lib/observers/statsDisplay/StatsDisplay.h
        lib/observers/display/Display.cpp
        lib/observers/display/Display.h
        lib/statsView/StatsView.cpp
        lib/statsView/StatsView.h
        test/lib/TestSelfDeleteObserver.h
        test/lib/TestPriorityObserver.h
        weatherStationPro/lib/weatherDataPro/WeatherDataPro.cpp weatherStationPro/lib/weatherDataPro/WeatherDataPro.h)

# tests
find_package(Catch2 3 REQUIRED)
add_executable(tests
        test/test.cpp
        lib/observable/IObservable.h
        lib/observers/IObserver.h
        lib/observable/BaseObservable.hpp
        lib/weatherData/WeatherData.cpp
        lib/weatherData/WeatherData.h
        lib/weatherData/WeatherInfo.h
        lib/observers/statsDisplay/StatsDisplay.cpp
        lib/observers/statsDisplay/StatsDisplay.h
        lib/observers/display/Display.cpp
        lib/observers/display/Display.h
        lib/statsView/StatsView.cpp
        lib/statsView/StatsView.h
        test/lib/TestSelfDeleteObserver.h
        test/lib/TestPriorityObserver.h
        weatherStationDuo/lib/WeatherStationDuo.hpp
        )
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
catch_discover_tests(tests)

# weatherStationDuo
add_executable(weatherStationDuo
    lib/observable/IObservable.h
    lib/observers/IObserver.h
    lib/observable/BaseObservable.hpp
    lib/weatherData/WeatherData.cpp
    lib/weatherData/WeatherData.h
    lib/weatherData/WeatherInfo.h
    lib/observers/statsDisplay/StatsDisplay.cpp
    lib/observers/statsDisplay/StatsDisplay.h
    lib/observers/display/Display.cpp
    lib/observers/display/Display.h
        lib/statsView/StatsView.cpp
        lib/statsView/StatsView.h
    weatherStationDuo/main.cpp weatherStationDuo/lib/WeatherStationDuo.hpp
)

# weatherStationPro

add_executable(weatherStationPro
        lib/observable/IObservable.h
        lib/observers/IObserver.h
        lib/observable/BaseObservable.hpp
        lib/weatherData/WeatherInfo.h
        lib/observers/statsDisplay/StatsDisplay.cpp
        lib/observers/statsDisplay/StatsDisplay.h
        lib/observers/display/Display.cpp
        lib/observers/display/Display.h
        lib/statsView/StatsView.cpp
        lib/statsView/StatsView.h
        weatherStationPro/main.cpp
        weatherStationPro/lib/weatherDataPro/WeatherDataPro.cpp weatherStationPro/lib/weatherDataPro/WeatherDataPro.h weatherStationPro/lib/WeatherProInfo.h
        weatherStationPro/lib/observers/statsDisplayPro/StatsDisplayPro.cpp
        weatherStationPro/lib/observers/statsDisplayPro/StatsDisplayPro.h
        weatherStationPro/lib/angleStatsView/AngleStatsView.cpp weatherStationPro/lib/angleStatsView/AngleStatsView.h)