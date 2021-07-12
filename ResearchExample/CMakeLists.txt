cmake_minimum_required(VERSION 3.9)
project(ResearchExample C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC_LIST "src/main/clang/*.c")
file(GLOB SRC_LIST_1 "src/main/clang/single-direction-link-list/*.c")

add_executable(ResearchExample main.c ${SRC_LIST} ${SRC_LIST_1})