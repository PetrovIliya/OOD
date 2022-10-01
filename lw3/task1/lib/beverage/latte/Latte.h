#ifndef TASK1_LATTE_H
#define TASK1_LATTE_H

#include "../coffee/Coffee.h"

class Latte : public Coffee
{
public:
    Latte();

    double GetCost() const override;
};

#endif //TASK1_LATTE_H
