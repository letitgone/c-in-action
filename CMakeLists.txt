cmake_minimum_required(VERSION 3.17)
project(c_in_action C)

set(CMAKE_C_STANDARD 99)

add_executable(first hello/first.c)

add_executable(input input/input.c)
