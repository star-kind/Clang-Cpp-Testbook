cmake_minimum_required(VERSION 3.9)
project(link_list_demo C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC_LIST_C "./src/main/clang/*.c")
file(GLOB SRC_LIST_H "./src/main/declare/*.h")

add_executable(link_list_demo main.c ${SRC_LIST_H} ${SRC_LIST_C})