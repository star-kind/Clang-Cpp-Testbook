#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

// 定义数据类型,可根据需要进行其他类型定义
typedef int ElementType;

// 链表节点的定义
typedef struct ListNode {
    //数据域，存放数据
    ElementType element;

    //指向下一个链表节点
    struct ListNode *next;

} Node, *PNode;

// 声明创建链表
PNode create_list(void);
PNode create_list_case(void);

//声明遍历链表
void traversal_list(PNode list_obj);

//声明链表插入
void insert_list(PNode list_obj, int pos, int val);

//声明删除整个链表
void delete_whole_list(PNode list_obj);

//声明删除链表元素
void delete_list_ele(PNode list_obj, int pos);

//声明链表查询
PNode find_list(PNode list_obj);
PNode find_list_case(PNode list_obj);
