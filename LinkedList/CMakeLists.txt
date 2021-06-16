cmake_minimum_required(VERSION 3.9)
project(LinkedList C)

set(CMAKE_C_STANDARD 99)

# 搜索当前目录下的所有.cpp/.c文件
aux_source_directory(src/main/clang SRC_LIST)

add_executable(LinkedList main.c src/main/declare/Declare.h ${SRC_LIST})