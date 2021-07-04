cmake_minimum_required(VERSION 3.9)
project(web_server_project C)

set(CMAKE_C_STANDARD 99)

aux_source_directory(src/main/clang SRC_LIST)
file(GLOB SRC_LIST_H "./src/main/head/*.h")

add_executable(web_server_project main.c ${SRC_LIST} ${SRC_LIST_H} src/main/head/total_declaration.h)