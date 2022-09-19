cmake_minimum_required(VERSION 3.16)
project(task3)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib/duck)

add_executable(
    task3
    lib/duck/Duck.cpp
    lib/duck/Duck.h
    main.cpp lib/Quack.hpp lib/Fly.hpp lib/Dance.hpp lib/Display.hpp
)
