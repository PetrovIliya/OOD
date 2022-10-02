#ifndef TASK1_CHOCOLATECRUMBS_H
#define TASK1_CHOCOLATECRUMBS_H

#include "../../../beverage/IBeverage.h"
#include "../condimentDecorator/CondimentDecorator.h"

class ChocolateCrumbs : public CondimentDecorator
{
public:
    ChocolateCrumbs(IBeveragePtr && beverage, unsigned mass);

    double GetCondimentCost()const override;

    std::string GetCondimentDescription()const override;

private:
    unsigned m_mass;
};

#endif //TASK1_CHOCOLATECRUMBS_H
