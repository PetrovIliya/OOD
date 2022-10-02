#ifndef TASK1_MILKSHAKE_H
#define TASK1_MILKSHAKE_H

#include "../BaseBeverage.hpp"
#include "MilkshakePortion.hpp"

class Milkshake : public BaseBeverage
{
public:
    explicit Milkshake(MilkSnakePortion portion = MilkSnakePortion::Medium);

    double GetCost() const override;
private:
    MilkSnakePortion m_portion;
};

#endif //TASK1_MILKSHAKE_H
