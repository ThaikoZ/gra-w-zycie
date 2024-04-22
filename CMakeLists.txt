cmake_minimum_required(VERSION 3.28)
project(grawzycie)

set(CMAKE_CXX_STANDARD 17)

add_executable(grawzycie main.cpp
        Engine.h
        Engine.cpp
        Game.cpp
        Game.h
        View.cpp
        View.h)
