#include "Chocolate.h"

static const size_t MAX_SLICES_COUNT = 5;

Chocolate::Chocolate(IBeveragePtr&& beverage, size_t quantity)
        : CondimentDecorator(std::move(beverage))
        , m_quantity(std::min(quantity, MAX_SLICES_COUNT))
{
}

double Chocolate::GetCondimentCost() const
{
    return 10 * m_quantity;
}

std::string Chocolate::GetCondimentDescription() const
{
    return "Chocolate x " + std::to_string(m_quantity);
}