#include "../declare/Declare.h"

/*
 * 插入手法。分为两步，：
0.将新结点的next指针指向插入位置后的结点；
1.将插入位置前的结点的next指针指向插入结点
 */

link *insertElem(link *p, int elem, int add) {
    //创建临时结点temp
    link *temp = p;

    //首先要找到插入位置的上个结点
    for (int i = 1; i < add; i++) {
        if (temp == NULL) {
            printf("插入的位置无效\n");
            return p;
        }
        temp = temp->next;
    }

    //创建插入结点c
    link *c = (link *) malloc(sizeof(link));
    c->elem = elem;
    //向链表中插入结点
    c->next = temp->next;
    temp->next = c;
    return p;
}
