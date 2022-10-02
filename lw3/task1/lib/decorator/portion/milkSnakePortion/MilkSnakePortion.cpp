#include "MilkSnakePortion.h"

MilkSnakePortion::MilkSnakePortion(IBeveragePtr &&beverage, MilkSnakePortionType portion) :
        PortionDecorator(std::move(beverage)),
        m_portion(portion)
{
}

double MilkSnakePortion::GetPortionCost() const
{
    switch(m_portion)
    {
        case MilkSnakePortionType::Large:
            return 20;
        case MilkSnakePortionType::Small:
            return -10;
        default:
            return 0;
    }
}

std::string MilkSnakePortion::GetPortionDescription() const
{
    switch(m_portion)
    {
        case MilkSnakePortionType::Large:
            return "Large portion";
        case MilkSnakePortionType::Small:
            return "Small portion";
        default:
            return "Medium portion";
    }
}