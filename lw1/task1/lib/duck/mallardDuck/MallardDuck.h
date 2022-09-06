#ifndef OOD_MALLARDDUCK_H
#define OOD_MALLARDDUCK_H

#include "../Duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck();

    void Display() const override;
};


#endif
