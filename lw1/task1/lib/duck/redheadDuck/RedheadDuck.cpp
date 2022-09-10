#include <ostream>
#include <iostream>
#include "RedheadDuck.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"
#include "../../dance/minuetDanceStrategy/MinuetDanceStrategy.h"

RedheadDuck::RedheadDuck() : Duck(std::make_unique<FlyWithWings>(), std::make_unique<QuackBehavior>(), std::make_unique<MinuetDanceStrategy>())
{
}

void RedheadDuck::Display() const
{
    std::cout << "I'm redhead duck" << std::endl;
}