
#include <iostream>
#include "StatsDisplay.h"

void StatsDisplay::Update(const WeatherInfo &data) {
    if (m_minTemperature > data.temperature)
    {
        m_minTemperature = data.temperature;
    }
    if (m_maxTemperature < data.temperature)
    {
        m_maxTemperature = data.temperature;
    }
    m_accTemperature += data.temperature;
    ++m_countAcc;

    std::cout << "Max Temp " << m_maxTemperature << std::endl;
    std::cout << "Min Temp " << m_minTemperature << std::endl;
    std::cout << "Average Temp " << (m_accTemperature / m_countAcc) << std::endl;
    std::cout << "----------------" << std::endl;
}
