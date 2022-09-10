#ifndef OOD_DUCK_H
#define OOD_DUCK_H

#include "../fly/IFlyBehavior.h"
#include "../quak/IQuackBehavior.h"
#include "../dance/IDanceStrategy.h"

#include <memory>

class Duck
{
public:

    Duck(std::unique_ptr<IFlyBehavior> && flyBehavior, std::unique_ptr<IQuackBehavior> && quackBehavior, std::unique_ptr<IDanceStrategy>&& danceStrategy);

    void Quack() const;

    void Swim();

    void Fly();

    virtual void Dance();

    void SetFlyBehavior(std::unique_ptr<IFlyBehavior>&& flyBehavior);

    virtual void Display() const = 0;
    virtual ~Duck() = default;

private:
    std::unique_ptr<IFlyBehavior> m_flyBehavior;
    std::unique_ptr<IQuackBehavior> m_quackBehavior;
    std::unique_ptr<IDanceStrategy> m_danceStrategy;
};


#endif //OOD_DUCK_H
