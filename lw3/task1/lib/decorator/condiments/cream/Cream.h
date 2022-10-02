#ifndef TASK1_CREAM_H
#define TASK1_CREAM_H

#include "../condimentDecorator/CondimentDecorator.h"

class Cream : public CondimentDecorator
{
public:
    explicit Cream(IBeveragePtr&& beverage);

protected:
    double GetCondimentCost() const override;
    std::string GetCondimentDescription() const override;
};

#endif //TASK1_CREAM_H
