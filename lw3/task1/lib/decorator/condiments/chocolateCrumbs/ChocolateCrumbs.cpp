#include "ChocolateCrumbs.h"

ChocolateCrumbs::ChocolateCrumbs(IBeveragePtr &&beverage, unsigned int mass)
        :CondimentDecorator(std::move(beverage))
        , m_mass(mass)
{
}

double ChocolateCrumbs::GetCondimentCost() const
{
    return 2.0 * m_mass;
}

std::string ChocolateCrumbs::GetCondimentDescription() const
{
    return "Chocolate crumbs " + std::to_string(m_mass) + "g";
}
