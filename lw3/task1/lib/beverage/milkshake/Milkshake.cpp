#include "Milkshake.h"

Milkshake::Milkshake(MilkSnakePortion portion)
        : BaseBeverage("Milkshake"),
        m_portion(portion)
{}

double Milkshake::GetCost() const
{
    switch (m_portion)
    {
        case MilkSnakePortion::Small:
            return 50.0;
        case MilkSnakePortion::Large:
            return 80.0;
        default:
            return 60.0;
    }
    return 80;
}
