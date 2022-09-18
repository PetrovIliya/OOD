#ifndef LW2_MEASUREMENTSTATSVIEW_H
#define LW2_MEASUREMENTSTATSVIEW_H

#include "../weatherData/WeatherInfo.h"
#include <algorithm>
#include <climits>
#include <string>

class MeasurementStatsView {
public:
    explicit MeasurementStatsView(std::string statsLabel);

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

#endif //LW2_MEASUREMENTSTATSVIEW_H
