#ifndef OOD_QUACKBEHAVIOR_H
#define OOD_QUACKBEHAVIOR_H

#include "../IQuackBehavior.h"

class QuackBehavior : public IQuackBehavior
{
public:

    void Quack() override;
};

#endif //OOD_QUACKBEHAVIOR_H
