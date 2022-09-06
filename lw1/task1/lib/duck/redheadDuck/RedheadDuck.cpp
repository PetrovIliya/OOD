#include <ostream>
#include <iostream>
#include "RedheadDuck.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"

RedheadDuck::RedheadDuck()
        : Duck(std::make_unique<FlyWithWings>(), std::make_unique<QuackBehavior>())
{
}

void RedheadDuck::Display() const
{
    std::cout << "I'm redhead duck" << std::endl;
}