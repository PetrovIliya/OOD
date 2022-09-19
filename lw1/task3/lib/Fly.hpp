#include <iostream>

#include <functional>

void FlyNoWay()
{
}

std::function<void()> FlyWithWings()
{
    unsigned int flyCount = 0;
    return [&flyCount]() -> void {
        std::cout << "I'm flying with wings!! Count: " << ++flyCount << std::endl;
    };
}