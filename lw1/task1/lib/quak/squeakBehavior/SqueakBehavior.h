#ifndef OOD_SQUEAKBEHAVIOR_H
#define OOD_SQUEAKBEHAVIOR_H

#include "../IQuackBehavior.h"

class SqueakBehavior : public IQuackBehavior
{
public:
    void Quack() override;
};



#endif //OOD_SQUEAKBEHAVIOR_H
