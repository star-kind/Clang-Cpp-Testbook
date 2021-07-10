cmake_minimum_required(VERSION 3.9)
project(ResearchExample C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC_LIST "src/main/clang/*.c") #递归搜索

add_executable(ResearchExample main.c ${SRC_LIST} src/main/clang/single_direction.c)