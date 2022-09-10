#include <iostream>
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "QuackBehavior.h"
#include "../../dance/cantDanceStrategy/CantDanceStrategy.h"

ModelDuck::ModelDuck(): Duck(std::make_unique<FlyNoWay>(), std::make_unique<QuackBehavior>(), std::make_unique<CantDanceStrategy>())
{}

void ModelDuck::Display() const
{
    std::cout << "I'm model duck" << std::endl;
}