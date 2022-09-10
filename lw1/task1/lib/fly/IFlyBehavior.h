#ifndef OOD_IFLYBEHAVIOR_H
#define OOD_IFLYBEHAVIOR_H

struct IFlyBehavior
{
    virtual ~IFlyBehavior() = default;
    virtual void Fly() = 0;
};

#endif //OOD_IFLYBEHAVIOR_H
