#ifndef TASK1_PORTIONDECORATOR_H
#define TASK1_PORTIONDECORATOR_H

#include "../../../beverage/IBeverage.h"

class PortionDecorator : public IBeverage
{
public:
    std::string GetDescription()const override;

    double GetCost()const override;

    virtual std::string GetPortionDescription()const = 0;
    virtual double GetPortionCost()const = 0;

protected:
    explicit PortionDecorator(IBeveragePtr && beverage);

private:
    IBeveragePtr m_beverage;
};

#endif //TASK1_PORTIONDECORATOR_H
