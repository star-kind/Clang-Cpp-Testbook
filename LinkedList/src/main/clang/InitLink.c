#include "../declare/Declare.h"

/*
 * 初始化链表首先要做的就是创建链表的头结点或者首元结点。创建的同时，要保证有一个指针永远指向的是链表的表头，这样做不至于丢失链表
 * */

//创建一个链表
link *initLink() {
    //创建1个结点
    link *p = (link *) malloc(sizeof(link));

    //声明一个结点指向头结点,用于遍历链表
    link *temp = p;

    //链表长度
    int linkListLeng = 10;

    //生成链表
    for (int i = 1; i < linkListLeng; i++) {
        link *a = (link *) malloc(sizeof(link));
        a->elem = i;
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}
