#ifndef TASK1_COCONUTFLAKES_H
#define TASK1_COCONUTFLAKES_H

#include "../condimentDecorator/CondimentDecorator.h"

class CoconutFlakes : public CondimentDecorator
{
public:
    CoconutFlakes(IBeveragePtr && beverage, unsigned mass);

protected:
    double GetCondimentCost()const override;
    std::string GetCondimentDescription()const override;

private:
    unsigned m_mass;
};

#endif //TASK1_COCONUTFLAKES_H
