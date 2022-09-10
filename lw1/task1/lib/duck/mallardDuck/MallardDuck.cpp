#include <iostream>
#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"
#include "../../dance/waltzDanceStrategy/WaltzDanceStrategy.h"

MallardDuck::MallardDuck(): Duck(std::make_unique<FlyWithWings>(), std::make_unique<QuackBehavior>(), std::make_unique<WaltzDanceStrategy>())
{
}

void MallardDuck::Display() const
{
    std::cout << "I'm mallard duck" << std::endl;
}
