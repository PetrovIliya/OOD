#include "Cream.h"

Cream::Cream(IBeveragePtr&& beverage)
        : CondimentDecorator(std::move(beverage))
{
}

double Cream::GetCondimentCost() const
{
    return 25;
}

std::string Cream::GetCondimentDescription() const
{
    return "Cream";
}