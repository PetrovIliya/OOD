#ifndef TASK1_TEA_H
#define TASK1_TEA_H


#include "../BaseBeverage.hpp"

class Tea : public BaseBeverage
{
public:
    Tea();

    double GetCost() const override;
};


#endif //TASK1_TEA_H
