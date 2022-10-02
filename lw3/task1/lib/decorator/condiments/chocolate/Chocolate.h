#ifndef TASK1_CHOCOLATE_H
#define TASK1_CHOCOLATE_H

#include "../condimentDecorator/CondimentDecorator.h"

class Chocolate : public CondimentDecorator
{
public:
    explicit Chocolate(IBeveragePtr&& beverage, size_t quantity = 1);

protected:
    double GetCondimentCost() const override;
    std::string GetCondimentDescription() const override;

private:
    unsigned m_quantity;
};

#endif //TASK1_CHOCOLATE_H
