#include "Coffee.h"

Coffee::Coffee(const std::string &description)
        :BaseBeverage(description)
{}

double Coffee::GetCost() const
{
    return 60;
}
