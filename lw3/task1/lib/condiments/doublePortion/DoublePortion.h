#ifndef TASK1_DOUBLEPORTION_H
#define TASK1_DOUBLEPORTION_H

#include "iostream"
#include "../../decorator/condimentDecorator/CondimentDecorator.h"

class DoublePortion : public CondimentDecorator
{
public:
    DoublePortion(IBeveragePtr&& beverage, double cost);

    std::string GetCondimentDescription() const override;
    double GetCondimentCost() const override;

private:
    double m_cost;
};

#endif //TASK1_DOUBLEPORTION_H
