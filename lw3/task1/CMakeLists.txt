cmake_minimum_required(VERSION 3.16)
project(task1)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1
        main.cpp
        lib/beverage/coffee/Coffee.cpp
        lib/beverage/coffee/Coffee.h
        lib/beverage/BaseBeverage.hpp
        lib/beverage/cappuccino/Cappuccino.cpp
        lib/beverage/cappuccino/Cappuccino.h
        lib/beverage/latte/Latte.cpp
        lib/beverage/latte/Latte.h
        lib/beverage/tea/Tea.cpp
        lib/beverage/tea/Tea.h
        lib/beverage/milkshake/Milkshake.cpp
        lib/beverage/milkshake/Milkshake.h
        lib/decorator/condiments/condimentDecorator/CondimentDecorator.cpp
        lib/decorator/condiments/condimentDecorator/CondimentDecorator.h
        lib/decorator/condiments/cinnamon/Cinnamon.cpp
        lib/decorator/condiments/cinnamon/Cinnamon.h
        lib/decorator/condiments/lemon/Lemon.cpp
        lib/decorator/condiments/lemon/Lemon.h
        lib/decorator/condiments/IceCubes/IceCubeType.hpp
        lib/decorator/condiments/IceCubes/IceCubes.cpp
        lib/decorator/condiments/IceCubes/IceCubes.h
        lib/decorator/condiments/syrup/Syrup.cpp
        lib/decorator/condiments/syrup/Syrup.h
        lib/decorator/condiments/syrup/SyrupType.hpp
        lib/decorator/condiments/chocolateCrumbs/ChocolateCrumbs.cpp
        lib/decorator/condiments/chocolateCrumbs/ChocolateCrumbs.h
        lib/decorator/condiments/coconutFlakes/CoconutFlakes.cpp
        lib/decorator/condiments/coconutFlakes/CoconutFlakes.h
        lib/decorator/portion/doublePortion/DoublePortion.cpp
        lib/decorator/portion/doublePortion/DoublePortion.h
        lib/beverage/tea/strawberryTea/StrawberryTea.cpp
        lib/beverage/tea/strawberryTea/StrawberryTea.h
        lib/beverage/tea/greenTea/GreenTea.cpp
        lib/beverage/tea/greenTea/GreenTea.h
        lib/beverage/tea/earlGreyTea/EarlGreyTea.cpp
        lib/beverage/tea/earlGreyTea/EarlGreyTea.h
        lib/beverage/tea/blackTea/BlackTea.cpp
        lib/beverage/tea/blackTea/BlackTea.h
        lib/beverage/milkshake/MilkshakePortionType.hpp
        lib/decorator/portion/milkSnakePortion/MilkSnakePortion.cpp
        lib/decorator/portion/milkSnakePortion/MilkSnakePortion.h lib/decorator/portion/portionDecorator/PortionDecorator.cpp lib/decorator/portion/portionDecorator/PortionDecorator.h)
