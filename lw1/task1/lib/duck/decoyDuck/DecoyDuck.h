#ifndef OOD_DECOYDUCK_H
#define OOD_DECOYDUCK_H

#include "../Duck.h"


class DecoyDuck : public Duck
{
public:
    DecoyDuck();

    void Display() const override;

    void Dance() override;
};


#endif //OOD_DECOYDUCK_H
