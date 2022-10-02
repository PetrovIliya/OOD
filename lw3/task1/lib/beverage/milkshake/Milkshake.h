#ifndef TASK1_MILKSHAKE_H
#define TASK1_MILKSHAKE_H

#include "../BaseBeverage.hpp"
#include "MilkshakePortionType.hpp"

class Milkshake : public BaseBeverage
{
public:
    explicit Milkshake();

    double GetCost() const override;
};

#endif //TASK1_MILKSHAKE_H
