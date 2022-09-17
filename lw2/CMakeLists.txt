cmake_minimum_required(VERSION 3.23)
project(lw2)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        lw2
        main.cpp
        lib/observable/IObservable.h
        lib/observers/IObserver.h
        lib/observable/BaseObservable.hpp
        lib/weatherData/WeatherData.cpp lib/weatherData/WeatherData.h lib/weatherData/WeatherInfo.h lib/observers/statsDisplay/StatsDisplay.cpp lib/observers/statsDisplay/StatsDisplay.h lib/observers/display/Display.cpp lib/observers/display/Display.h lib/measurementStatsView/MeasurementStatsView.cpp lib/measurementStatsView/MeasurementStatsView.h)
