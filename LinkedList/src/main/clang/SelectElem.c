#include "../declare/Declare.h"

/*
 * 一般情况下，链表只能通过头结点或者头指针进行访问，所以实现查找某结点最常用的方法就是对链表中的结点进行逐个遍历。
 */

/**
 *
 * @param p
 * @param elem
 * @return 元素的位置
 */
int selectElem(link *p, int elem) {
    link *t = p;
    int i = 1;
    while (t->next) {
        t = t->next;
        if (t->elem == elem) {
            return i;
        }
        i++;
    }
    return -1;
}
