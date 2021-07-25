cmake_minimum_required(VERSION 3.19)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

file(GLOB src_linear_seq "src/main/clang/linear-table/sequence/*.c")
file(GLOB src_linear_double "src/main/clang/linear-table/double-direction/*.c")
file(GLOB src_linear_single "src/main/clang/linear-table/single-direction/*.c")
file(GLOB src_stack "src/main/clang/stack-queue/stack/*.c")

add_executable(data_structure main.c src/main/header/linear-tbl/linear_declaration.h src/main/header/exports_declaration.h ${src_linear_single} ${src_linear_double} ${src_linear_seq} src/main/clang/linear-table/practise/merge_seq.c src/main/clang/linear-table/practise/merge_single_direction.c src/main/clang/linear-table/practise/reverse_single_direction.c src/main/clang/linear-table/practise/find_middle_node_s_d.c src/main/clang/linear-table/practise/find_from_bottom.c src/main/clang/linear-table/practise/del_repeat_s_d.c src/main/clang/linear-table/practise/del_repeat_s_d.c src/main/clang/linear-table/practise/del_duplicate_ele.c src/main/clang/stack-queue/stack/sequence_stack.c src/main/header/stack-queue/stack_queue_decl.h src/main/header/base/base.h src/main/clang/stack-queue/stack/linked_stack.c ${src_stack} src/main/clang/stack-queue/queue/circulate_queue.c)