#ifndef TASK1_MILKSNAKEPORTION_H
#define TASK1_MILKSNAKEPORTION_H

#include "../../../beverage/milkshake/MilkshakePortionType.hpp"
#include "../portionDecorator/PortionDecorator.h"

class MilkSnakePortion : public PortionDecorator
{
public:
    MilkSnakePortion(IBeveragePtr && beverage, MilkSnakePortionType portion);

protected:
    double GetPortionCost()const override;

    std::string GetPortionDescription()const override;

private:
    MilkSnakePortionType m_portion;
};

#endif //TASK1_MILKSNAKEPORTION_H
