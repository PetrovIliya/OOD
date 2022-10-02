#include <iostream>
#include <string>
#include <functional>
#include "lib/beverage/IBeverage.h"
#include "lib/beverage/coffee/Coffee.h"
#include "lib/beverage/latte/Latte.h"
#include "lib/beverage/milkshake/Milkshake.h"
#include "lib/beverage/cappuccino/Cappuccino.h"
#include "lib/beverage/tea/greenTea/GreenTea.h"
#include "lib/decorator/portion/doublePortion/DoublePortion.h"
#include "lib/decorator/portion/milkSnakePortion/MilkSnakePortion.h"

template <typename Condiment, typename... Args>
auto Decorate(const Args&...args)
{
    return [=](auto && b) {
        return std::make_unique<Condiment>(std::forward<decltype(b)>(b), args...);
    };
}

template <typename Component, typename Decorator>
auto operator << (Component && component, const Decorator & decorate)
{
    return decorate(std::forward<Component>(component));
}

int main()
{
    {
        // latte double portion
        auto beverage = std::make_unique<Latte>()
                << Decorate<DoublePortion>(40);
        std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << std::endl;
    }

    {
        // cappuccino double portion
        auto beverage = std::make_unique<Cappuccino>()
                << Decorate<DoublePortion>(40);
        std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << std::endl;
    }

    {
        // Green tea
        auto beverage = std::make_unique<GreenTea>();
        std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << std::endl;
    }

    {
        // milk snake large portion
        auto beverage = std::make_unique<Milkshake>()
                << Decorate<MilkSnakePortion>(MilkSnakePortionType::Large);
        std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << std::endl;
    }
}