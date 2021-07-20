cmake_minimum_required(VERSION 3.19)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

file(GLOB src_linear_seq "src/main/clang/linear-table/sequence/*.c")
file(GLOB src_linear_double "src/main/clang/linear-table/double-direction/*.c")
file(GLOB src_linear_single "src/main/clang/linear-table/sinle-direction/*.c")

add_executable(data_structure main.c src/main/header/linear-tbl/linear_declaration.h src/main/header/exports_declaration.h ${src_linear_single} ${src_linear_double} ${src_linear_seq} src/main/clang/linear-table/practise/merge_seq.c)