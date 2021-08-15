cmake_minimum_required(VERSION 3.19)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

file(GLOB src_linear_seq "src/main/clang/linear-table/sequence/*.c")
file(GLOB src_linear_double "src/main/clang/linear-table/double-direction/*.c")
file(GLOB src_linear_single "src/main/clang/linear-table/single-direction/*.c")
file(GLOB src_stack "src/main/clang/stack-queue/stack/*.c")
file(GLOB src_queue "src/main/clang/stack-queue/queue/*.c")
file(GLOB src_queue_practice "src/main/clang/stack-queue/practice/*.c")

add_executable(data_structure main.c src/main/header/linear-tbl/linear_declaration.h src/main/header/exports_declaration.h ${src_linear_single} ${src_linear_double} ${src_linear_seq} src/main/clang/linear-table/practise/merge_seq.c src/main/clang/linear-table/practise/merge_single_direction.c src/main/clang/linear-table/practise/reverse_single_direction.c src/main/clang/linear-table/practise/find_middle_node_s_d.c src/main/clang/linear-table/practise/find_from_bottom.c src/main/clang/linear-table/practise/del_repeat_s_d.c src/main/clang/linear-table/practise/del_repeat_s_d.c src/main/clang/linear-table/practise/del_duplicate_ele.c src/main/clang/stack-queue/stack/sequence_stack.c src/main/header/stack-queue/stack_queue_decl.h src/main/header/base/base.h src/main/clang/stack-queue/stack/linked_stack.c ${src_stack} ${src_queue} ${src_queue_practice} src/main/clang/stack-queue/queue/link_queue.c src/main/clang/stack-queue/practice/determine_palindrome.c src/main/clang/stack-queue/double-direction-queue/case.c src/main/clang/string/brute_force_algorithm.c src/main/header/string-practise/index.h src/main/header/matrix-array/matrix_index.h src/main/clang/matrix-array/snake_matrix.c src/main/header/tree-header/tree_index.h src/main/clang/tree/binary_tree_example.c src/main/clang/tree/str_to_tree.c src/main/clang/graph/graph_adjacent_matrix.c src/main/header/graph/graph_index.h src/main/clang/graph/graph_adjacent_matrix1.c src/main/clang/graph/graph_adjacent_list.c src/main/clang/graph/graph_adj_matrix.c)