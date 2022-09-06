#ifndef OOD_IQUACKBEHAVIOR_H
#define OOD_IQUACKBEHAVIOR_H

struct IQuackBehavior
{
    virtual ~IQuackBehavior(){};
    virtual void Quack() = 0;
};

#endif //OOD_IQUACKBEHAVIOR_H
