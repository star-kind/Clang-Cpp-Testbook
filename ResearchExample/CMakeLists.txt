cmake_minimum_required(VERSION 3.9)
project(ResearchExample C)

set(CMAKE_C_STANDARD 99)

add_executable(ResearchExample main.c src/main/clang/get_string.c src/main/header/declaration.h)