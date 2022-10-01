#include <iostream>
#include <string>
#include <functional>
#include "lib/beverage/IBeverage.h"
#include "lib/condiments/lemon/Lemon.h"
#include "lib/condiments/cinnamon/Cinnamon.h"
#include "lib/beverage/coffee/Coffee.h"
#include "lib/condiments/IceCubes/IceCubeType.hpp"
#include "lib/beverage/latte/Latte.h"
#include "lib/condiments/IceCubes/IceCubes.h"
#include "lib/condiments/chocolateCrumbs/ChocolateCrumbs.h"
#include "lib/beverage/milkshake/Milkshake.h"
#include "lib/condiments/syrup/Syrup.h"
#include "lib/condiments/coconutFlakes/CoconutFlakes.h"

template <typename Condiment, typename... Args>
auto MakeCondiment(const Args&...args)
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
        auto beverage =
                std::make_unique<Latte>()							// Наливаем чашечку латте,
                        << MakeCondiment<Cinnamon>()					// оборачиваем корицей,
                        << MakeCondiment<Lemon>(2)						// добавляем пару долек лимона
                        << MakeCondiment<IceCubes>(2, IceCubeType::Dry)// брасаем пару кубиков сухого льда
                        << MakeCondiment<ChocolateCrumbs>(2);			// посыпаем шоколадной крошкой

        // Выписываем счет покупателю
        std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << std::endl;
    }

    {
        auto beverage =
                std::make_unique<Milkshake>()					// Наливаем молочный коктейль
                        << MakeCondiment<Syrup>(SyrupType::Maple)	// заливаем кленовым сиропом
                        << MakeCondiment<CoconutFlakes>(8);		// посыпаем кокосовой стружкой

        // Выписываем счет покупателю
        std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << std::endl;
    }
}