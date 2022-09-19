#ifndef LW2_STATSVIEW_H
#define LW2_STATSVIEW_H

#include "../weatherData/WeatherInfo.h"
#include <algorithm>
#include <climits>
#include <string>

class StatsView {
public:
    explicit StatsView(std::string statsLabel);

    void UpdateStats(double value);

    void DisplayStats();

private:
    double m_minValue = std::numeric_limits<double>::infinity();
    double m_maxValue = -std::numeric_limits<double>::infinity();
    double m_accValue = 0;
    unsigned m_countAcc = 0;
    double m_average = 0;
    std::string m_statsLabel;
};

#endif //LW2_STATSVIEW_H
