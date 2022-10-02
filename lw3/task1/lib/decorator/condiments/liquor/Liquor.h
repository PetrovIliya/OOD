#ifndef TASK1_LIQUOR_H
#define TASK1_LIQUOR_H

#include "iostream"
#include "../../../beverage/IBeverage.h"
#include "LiquorType.hpp"
#include "../condimentDecorator/CondimentDecorator.h"

class Liquor : public CondimentDecorator
{
public:
    Liquor(IBeveragePtr&& beverage, LiquorType type = LiquorType::Chocolate);

protected:
    double GetCondimentCost() const override;
    std::string GetCondimentDescription() const override;

private:
    LiquorType m_type;
};

#endif //TASK1_LIQUOR_H
