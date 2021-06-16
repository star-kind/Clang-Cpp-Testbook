//
// Created by user on 21-6-16.
//

#ifndef LINKEDLIST_DECLARE_H
#define LINKEDLIST_DECLARE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Link {
    //数据域
    char elem;

    //指针域,指向直接后继元素
    struct Link *next;
} link;

//初始化链表
link *initLink();

//链表插入的函数，p是链表，elem是插入的结点的数据域，add是插入的位置
link *insertElem(link *p, int elem, int add);

//删除结点的函数，p代表操作链表，add代表删除节点的位置
link *delElem(link *p, int add);

//查找结点的函数，elem为目标结点的数据域的值
int selectElem(link *p, int elem);

//更新结点的函数，newElem为新的数据域的值
link *amendElem(link *p, int add, int newElem);

void display(link *p);

#endif //LINKEDLIST_DECLARE_H
