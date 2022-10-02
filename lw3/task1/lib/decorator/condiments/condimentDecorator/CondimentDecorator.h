#ifndef TASK1_CONDIMENTDECORATOR_H
#define TASK1_CONDIMENTDECORATOR_H

#include "../../../beverage/IBeverage.h"

class CondimentDecorator : public IBeverage
{
public:
    std::string GetDescription()const override;

    double GetCost()const override;

    // Стоимость и описание добавки вычисляется в классах конкретных декораторов
    virtual std::string GetCondimentDescription()const = 0;
    virtual double GetCondimentCost()const = 0;

protected:
    explicit CondimentDecorator(IBeveragePtr && beverage);

private:
    IBeveragePtr m_beverage;
};


#endif //TASK1_CONDIMENTDECORATOR_H
