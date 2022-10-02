#ifndef TASK1_CINNAMON_H
#define TASK1_CINNAMON_H

#include "../../decorator/condimentDecorator/CondimentDecorator.h"

class Cinnamon : public CondimentDecorator
{
public:
    explicit Cinnamon(IBeveragePtr && beverage);

protected:
    double GetCondimentCost()const override;

    std::string GetCondimentDescription()const override;
};

#endif //TASK1_CINNAMON_H
