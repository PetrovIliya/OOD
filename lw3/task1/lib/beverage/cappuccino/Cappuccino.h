#ifndef TASK1_CAPPUCCINO_H
#define TASK1_CAPPUCCINO_H

#include "../coffee/Coffee.h"

class Cappuccino : public Coffee
{
public:
    Cappuccino();

    double GetCost() const override;
};

#endif //TASK1_CAPPUCCINO_H
