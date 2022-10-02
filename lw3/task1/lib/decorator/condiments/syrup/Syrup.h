#ifndef TASK1_SYRUP_H
#define TASK1_SYRUP_H

#include "SyrupType.hpp"
#include "../condimentDecorator/CondimentDecorator.h"

class Syrup : public CondimentDecorator
{
public:
    Syrup(IBeveragePtr && beverage, SyrupType syrupType);

protected:
    double GetCondimentCost()const override;
    std::string GetCondimentDescription()const override;

private:
    SyrupType m_syrupType;
};

#endif //TASK1_SYRUP_H
