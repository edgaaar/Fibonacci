cmake_minimum_required(VERSION 2.8.9)
project(Fibonacci)

include_directories(include)

set(SOURCES src/Fibonacci.cpp src/main.cpp)

add_executable(Fibonacci ${SOURCES})
