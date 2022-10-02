#include "Liquor.h"

Liquor::Liquor(IBeveragePtr&& beverage, LiquorType type)
        : CondimentDecorator(std::move(beverage))
        , m_type(type)
{
}

double Liquor::GetCondimentCost() const
{
    return 50;
}

std::string Liquor::GetCondimentDescription() const
{
    return std::string(m_type == LiquorType::Nuts ? "Nuts" : "Chocolate")
           + " liquor";
}