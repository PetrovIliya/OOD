cmake_minimum_required(VERSION 3.23)
project(task1)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib/duck)
include_directories(lib/duck/decoyDuck)
include_directories(lib/duck/mallardDuck)
include_directories(lib/duck/modelDuck)
include_directories(lib/duck/redheadDuck)
include_directories(lib/duck/rubberDuck)
include_directories(lib/fly)
include_directories(lib/fly/flyNoWay)
include_directories(lib/fly/flyWithWings)
include_directories(lib/quak)
include_directories(lib/quak/muteQuackBehavior)
include_directories(lib/quak/quackBehavior)
include_directories(lib/quak/squeakBehavior)

add_executable(task1
        lib/duck/decoyDuck/DecoyDuck.cpp
        lib/duck/decoyDuck/DecoyDuck.h
        lib/duck/mallardDuck/MallardDuck.cpp
        lib/duck/mallardDuck/MallardDuck.h
        lib/duck/modelDuck/ModelDuck.cpp
        lib/duck/modelDuck/ModelDuck.h
        lib/duck/redheadDuck/RedheadDuck.cpp
        lib/duck/redheadDuck/RedheadDuck.h
        lib/duck/rubberDuck/RubberDuck.cpp
        lib/duck/rubberDuck/RubberDuck.h
        lib/duck/Duck.cpp
        lib/duck/Duck.h
        lib/fly/flyNoWay/FlyNoWay.cpp
        lib/fly/flyNoWay/FlyNoWay.h
        lib/fly/flyWithWings/FlyWithWings.cpp
        lib/fly/flyWithWings/FlyWithWings.h
        lib/fly/IFlyBehavior.h
        lib/quak/muteQuackBehavior/MuteQuackBehavior.cpp
        lib/quak/muteQuackBehavior/MuteQuackBehavior.h
        lib/quak/quackBehavior/QuackBehavior.cpp
        lib/quak/quackBehavior/QuackBehavior.h
        lib/quak/squeakBehavior/SqueakBehavior.cpp
        lib/quak/squeakBehavior/SqueakBehavior.h
        lib/quak/IQuackBehavior.h
        lib/SimUDuck.cpp
        main.cpp)
