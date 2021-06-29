cmake_minimum_required(VERSION 3.9)
project(socket_cilent C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC_LIST "./src/main/clang/*.c")

add_executable(socket_cilent ${SRC_LIST} main.c src/main/declare/DeclareLib.h)