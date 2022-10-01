#ifndef TASK1_MILKSHAKE_H
#define TASK1_MILKSHAKE_H

#include "../BaseBeverage.hpp"

class Milkshake : public BaseBeverage
{
public:
    Milkshake();

    double GetCost() const override;
};

#endif //TASK1_MILKSHAKE_H
