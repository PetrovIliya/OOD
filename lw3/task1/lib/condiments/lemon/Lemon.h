#ifndef TASK1_LEMON_H
#define TASK1_LEMON_H

#include "../condimentDecorator/CondimentDecorator.h"

class Lemon : public CondimentDecorator
{
public:
    explicit Lemon(IBeveragePtr && beverage, unsigned quantity = 1);

protected:
    double GetCondimentCost()const override;

    std::string GetCondimentDescription()const override;

private:
    unsigned m_quantity;
};

#endif //TASK1_LEMON_H
