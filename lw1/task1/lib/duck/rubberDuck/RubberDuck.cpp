#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "SqueakBehavior.h"
#include <iostream>

RubberDuck::RubberDuck(): Duck(std::make_unique<FlyNoWay>(), std::make_unique<SqueakBehavior>())
{

}

void RubberDuck::Display() const
{
    std::cout << "I'm rubber duck" << std::endl;
}

void RubberDuck::Dance()
{

}