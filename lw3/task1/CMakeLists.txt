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
        lib/decorator/condimentDecorator/CondimentDecorator.cpp
        lib/decorator/condimentDecorator/CondimentDecorator.h
        lib/condiments/cinnamon/Cinnamon.cpp
        lib/condiments/cinnamon/Cinnamon.h
        lib/condiments/lemon/Lemon.cpp
        lib/condiments/lemon/Lemon.h
        lib/condiments/IceCubes/IceCubeType.hpp
        lib/condiments/IceCubes/IceCubes.cpp
        lib/condiments/IceCubes/IceCubes.h
        lib/condiments/syrup/Syrup.cpp
        lib/condiments/syrup/Syrup.h
        lib/condiments/syrup/SyrupType.hpp
        lib/condiments/chocolateCrumbs/ChocolateCrumbs.cpp
        lib/condiments/chocolateCrumbs/ChocolateCrumbs.h
        lib/condiments/coconutFlakes/CoconutFlakes.cpp
        lib/condiments/coconutFlakes/CoconutFlakes.h
        lib/condiments/doublePortion/DoublePortion.cpp
        lib/condiments/doublePortion/DoublePortion.h
        lib/beverage/tea/strawberryTea/StrawberryTea.cpp
        lib/beverage/tea/strawberryTea/StrawberryTea.h
        lib/beverage/tea/greenTea/GreenTea.cpp
        lib/beverage/tea/greenTea/GreenTea.h
        lib/beverage/tea/earlGreyTea/EarlGreyTea.cpp
        lib/beverage/tea/earlGreyTea/EarlGreyTea.h
        lib/beverage/tea/blackTea/BlackTea.cpp
        lib/beverage/tea/blackTea/BlackTea.h lib/beverage/milkshake/MilkshakePortion.hpp)
