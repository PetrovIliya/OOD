#include <iostream>
#include "AngleStatsView.h"

const double MAX_ANGLE_DEGREES = 360;

double NormalizeAngle(double number)
{
    while (number < 0)
    {
        number += MAX_ANGLE_DEGREES;
    }
    while (number >= MAX_ANGLE_DEGREES)
    {
        number -= MAX_ANGLE_DEGREES;
    }

    return number;
}

double NormalizeAngleForAvg(double angle)
{
    if (angle >= 0 && angle <= MAX_ANGLE_DEGREES / 2)
    {
        return angle;
    }

    return MAX_ANGLE_DEGREES - angle;
}

AngleStatsView::AngleStatsView(std::string statsLabel)
{
    m_statsLabel = std::move(statsLabel);
}

void AngleStatsView::UpdateStats(double value) {
    value = NormalizeAngle(value);

    if (m_minValue > value)
    {
        m_minValue = value;
    }
    if (m_maxValue < value)
    {
        m_maxValue = value;
    }

    value = NormalizeAngleForAvg(value);
    m_accValue += value;
    ++m_countAcc;
    m_average = m_accValue / m_countAcc;
}

void AngleStatsView::DisplayStats() {
    std::cout << "Max " << m_statsLabel << " " <<  m_maxValue << std::endl;
    std::cout << "Min " << m_statsLabel << " " << m_minValue << std::endl;
    std::cout << "Average " << m_statsLabel << " " << m_average << std::endl;
    std::cout << "----------------" << std::endl;
}