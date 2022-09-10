#ifndef OOD_FLYWITHWINGS_H
#define OOD_FLYWITHWINGS_H

#include "../IFlyBehavior.h"

class FlyWithWings : public IFlyBehavior
{
public:
    FlyWithWings()
            : m_flyCount(0)
    {}

    void Fly() override;

private:
    unsigned int m_flyCount;
};

#endif //OOD_FLYWITHWINGS_H
