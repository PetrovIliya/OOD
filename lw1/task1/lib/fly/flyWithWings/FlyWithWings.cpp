#include "FlyWithWings.h"
#include "iostream"

void FlyWithWings::Fly()
{
    m_flyCount++;
    std::cout << "I'm flying with wings!! Count: " << m_flyCount << std::endl;
}