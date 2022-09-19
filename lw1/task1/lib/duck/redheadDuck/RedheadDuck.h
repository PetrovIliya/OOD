#ifndef OOD_REDHEADDUCK_H
#define OOD_REDHEADDUCK_H

#include "../Duck.h"

class RedheadDuck : public Duck
{
public:
    RedheadDuck();

    void Display() const override;
};

#endif //OOD_REDHEADDUCK_H
