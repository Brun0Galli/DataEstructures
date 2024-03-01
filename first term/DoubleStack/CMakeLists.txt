cmake_minimum_required(VERSION 3.28)
project(DataEstructures)

set(CMAKE_CXX_STANDARD 17)

add_executable(DoubleStack.cpp
        Stack.cpp
        Stack2.cpp
    Stack.h
        ../StackDinamic/DinamicStack.cpp
        ../StackDinamic/DinamicStack.h
        ../StackDinamic/Functions.cpp)