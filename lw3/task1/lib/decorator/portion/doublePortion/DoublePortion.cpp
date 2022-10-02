#include "DoublePortion.h"

DoublePortion::DoublePortion(IBeveragePtr&& beverage, double cost = 40)
        : PortionDecorator(std::move(beverage))
        , m_cost(cost)
{
}

std::string DoublePortion::GetPortionDescription() const
{
    return "double portion, ";
}

double DoublePortion::GetPortionCost() const
{
    return m_cost;
}