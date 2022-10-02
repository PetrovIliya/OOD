#include "Tea.h"

Tea::Tea(const std::string & description)
        :BaseBeverage(description)
{}

double Tea::GetCost() const
{
    return 30;
}
