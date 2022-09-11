cmake_minimum_required(VERSION 3.23)
project(task3)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib/duck)

add_executable(
    task3
    lib/duck/Duck.cpp
    lib/duck/Duck.h
    main.cpp lib/Quack.cpp lib/Fly.cpp lib/Dance.cpp lib/Display.cpp
)
