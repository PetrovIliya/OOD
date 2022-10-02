#include "DoublePortion.h"

DoublePortion::DoublePortion(IBeveragePtr&& beverage, double cost = 40)
        : CondimentDecorator(std::move(beverage))
        , m_cost(cost)
{
}

std::string DoublePortion::GetCondimentDescription() const
{
    return "double portion, ";
}

double DoublePortion::GetCondimentCost() const
{
    return m_cost;
}