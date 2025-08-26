cmake_minimum_required(VERSION 4.0)
project(Calculadora)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculadora main.cpp
        matematicas.cpp
        matematicas.h)
