cmake_minimum_required(VERSION 3.9)
project(DataBase C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC_HEAD_FILE "src/head/*.h")
file(GLOB SRC_C_LANGUAGE "src/clanguage/*.c")

add_executable(DataBase main.c ${SRC_HEAD_FILE} ${SRC_C_LANGUAGE} src/clanguage/HelpDoc.c src/head/Methods.h)