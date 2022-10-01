#ifndef LW2_WEATHERSTATIONVIEW_H
#define LW2_WEATHERSTATIONVIEW_H

#include "iostream"
#include <algorithm>
#include <climits>

class WeatherStationView
{
public:
	explicit WeatherStationView(std::string statsLabel, std::string location);

	void UpdateStats(double value);

	void DisplayStats();

private:
	double m_minValue = std::numeric_limits<double>::infinity();
	double m_maxValue = -std::numeric_limits<double>::infinity();
	double m_accValue = 0;
	unsigned m_countAcc = 0;
	double m_average = 0;
	std::string m_location;
	std::string m_statsLabel;
};

#endif // LW2_WEATHERSTATIONVIEW_H
