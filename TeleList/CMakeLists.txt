cmake_minimum_required(VERSION 3.9)
project(TeleList C)

set(CMAKE_C_STANDARD 99)

# 自定义搜索规则
file(GLOB SRC_LIST "*.c")
file(GLOB SRC_execute_dir "src/c-dir/*.c")
file(GLOB SRC_processing "src/c-dir/processing/*.c")

add_executable(TeleList ${SRC_LIST} ${SRC_execute_dir} ${SRC_processing} src/head-dir/link_man.h src/c-dir/util/api.c functions.h)
