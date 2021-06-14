cmake_minimum_required(VERSION 3.9)
project(StudentDataBase C)

set(CMAKE_C_STANDARD 99)

file(GLOB src_c_main "src/clang/main/*.c")
file(GLOB src_c_main_1 "src/clang/main/create/*.c")
file(GLOB src_c_main_2 "src/clang/main/rw/*.c")
file(GLOB src_c_main_3 "src/clang/main/delete/*.c")
file(GLOB src_c_main_4 "src/clang/main/update/*.c")
file(GLOB src_c_main_5 "src/clang/main/retrive/*.c")
file(GLOB src_c_main_6 "src/clang/main/control/*.c")

add_executable(StudentDataBase main.c src/declare/Declare.h ${src_c_main} ${src_c_main_1} ${src_c_main_2}
        ${src_c_main_3} ${src_c_main_4} ${src_c_main_5} ${src_c_main_6})