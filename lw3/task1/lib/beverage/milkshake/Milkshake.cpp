#include "Milkshake.h"

Milkshake::Milkshake()
        :BaseBeverage("Milkshake")
{}

double Milkshake::GetCost() const
{
    return 80;
}
