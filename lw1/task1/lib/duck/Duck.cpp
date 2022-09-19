#include "Duck.h"

#include <cassert>
#include <iostream>

Duck::Duck(std::unique_ptr<IFlyBehavior>&& flyBehavior,
           std::unique_ptr<IQuackBehavior>&& quackBehavior,
           std::unique_ptr<IDanceStrategy>&& danceStrategy)
        : m_quackBehavior(std::move(quackBehavior))
        , m_danceStrategy(std::move(danceStrategy))
{
    assert(m_quackBehavior);
    SetFlyBehavior(std::move(flyBehavior));
    // fix construct
}

void Duck::Quack() const
{
    m_quackBehavior->Quack();
}

void Duck::Swim()
{
    std::cout << "I'm swimming" << std::endl;
}

void Duck::Fly()
{
    m_flyBehavior->Fly();
}

void Duck::Dance()
{
    m_danceStrategy->Dance();
}

void Duck::SetFlyBehavior(std::unique_ptr<IFlyBehavior>&& flyBehavior)
{
    assert(flyBehavior);
    m_flyBehavior = std::move(flyBehavior);
}