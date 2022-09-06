#include <iostream>
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "QuackBehavior.h"

ModelDuck::ModelDuck(): Duck(std::make_unique<FlyNoWay>(), std::make_unique<QuackBehavior>())
{}

void ModelDuck::Display() const
{
    std::cout << "I'm model duck" << std::endl;
}

void ModelDuck::Dance()
{}