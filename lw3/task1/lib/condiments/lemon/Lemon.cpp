#include "Lemon.h"

Lemon::Lemon(IBeveragePtr &&beverage, unsigned int quantity)
        : CondimentDecorator(std::move(beverage))
        , m_quantity(quantity)
{}

double Lemon::GetCondimentCost() const
{
    return 10.0 * m_quantity;
}

std::string Lemon::GetCondimentDescription() const
{
    return "Lemon x " + std::to_string(m_quantity);
}
