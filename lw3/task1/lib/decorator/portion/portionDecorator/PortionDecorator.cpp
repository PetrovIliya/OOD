#include "PortionDecorator.h"

std::string PortionDecorator::GetDescription() const
{
    return m_beverage->GetDescription() + ", " + GetPortionDescription();
}

double PortionDecorator::GetCost() const
{
    return m_beverage->GetCost() + GetPortionCost();
}

PortionDecorator::PortionDecorator(IBeveragePtr &&beverage)
        : m_beverage(std::move(beverage))
{
}