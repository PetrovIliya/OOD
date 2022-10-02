#ifndef TASK1_DOUBLEPORTION_H
#define TASK1_DOUBLEPORTION_H

#include "iostream"
#include "../portionDecorator/PortionDecorator.h"

class DoublePortion : public PortionDecorator
{
public:
    DoublePortion(IBeveragePtr&& beverage, double cost);

    std::string GetPortionDescription() const override;
    double GetPortionCost() const override;

private:
    double m_cost;
};

#endif //TASK1_DOUBLEPORTION_H
