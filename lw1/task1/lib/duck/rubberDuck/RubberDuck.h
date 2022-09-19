#ifndef OOD_RUBBERDUCK_H
#define OOD_RUBBERDUCK_H

#include "../Duck.h"


class RubberDuck : public Duck
{
public:
    RubberDuck();

    void Display() const override;

    void Dance() override;
};

#endif //OOD_RUBBERDUCK_H
