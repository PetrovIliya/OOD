#include "StatsView.h"

#include <utility>
#include "iostream"

StatsView::StatsView(std::string statsLabel)
{
    m_statsLabel = std::move(statsLabel);
}

void StatsView::UpdateStats(double value) {
    if (m_minValue > value)
    {
        m_minValue = value;
    }
    if (m_maxValue < value)
    {
        m_maxValue = value;
    }
    m_accValue += value;
    ++m_countAcc;
    m_average = m_accValue / m_countAcc;
}

void StatsView::DisplayStats() {
    std::cout << "Max " << m_statsLabel << " " <<  m_maxValue << std::endl;
    std::cout << "Min " << m_statsLabel << " " << m_minValue << std::endl;
    std::cout << "Average " << m_statsLabel << " " << m_average << std::endl;
    std::cout << "----------------" << std::endl;
}
