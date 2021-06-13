cmake_minimum_required(VERSION 3.9)
project(TeleList C)

set(CMAKE_C_STANDARD 99)

# 自定义搜索规则
file(GLOB SRC_LIST "*.c")
file(GLOB SRC_execute_dir "src/clang/*.c")
file(GLOB SRC_processing "src/clang/main/*.c")

add_executable(TeleList ${SRC_LIST} ${SRC_execute_dir} ${SRC_processing} src/heads/link_man.h src/clang/util/api.c src/heads/functions.h)
