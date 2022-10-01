#ifndef TASK1_ICECUBES_H
#define TASK1_ICECUBES_H

#include "../condimentDecorator/CondimentDecorator.h"
#include "IceCubeType.hpp"

class IceCubes : public CondimentDecorator
{
public:
    IceCubes(IBeveragePtr && beverage, unsigned quantity, IceCubeType type = IceCubeType::Water);

protected:
    double GetCondimentCost()const override;
    std::string GetCondimentDescription()const override;

private:
    unsigned m_quantity;
    IceCubeType m_type;
};

#endif //TASK1_ICECUBES_H
