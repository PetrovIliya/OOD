#ifndef LW2_ANGLESTATSVIEW_H
#define LW2_ANGLESTATSVIEW_H

#include <string>
#include <limits>

class AngleStatsView
{
public:
    explicit AngleStatsView(std::string statsLabel);

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

#endif //LW2_ANGLESTATSVIEW_H
