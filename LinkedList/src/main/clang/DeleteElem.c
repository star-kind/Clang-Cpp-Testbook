#include "../declare/Declare.h"

/*
 * 当需要从链表中删除某个结点时，需要进行两步操作：
0.将结点从链表中摘下来;
1.手动释放掉结点，回收被结点占用的内存空间;
 */

link *delElem(link *p, int add) {
    link *temp = p;

    //temp指向被删除结点的上个结点
    for (int i = 1; i < add; i++) {
        temp = temp->next;
    }

    //单独设置一个指针指向被删除结点，以防丢失
    link *del = temp->next;

    //删除某个结点的方法就是更改前一个结点的指针域
    temp->next = temp->next->next;

    //手动释放该结点，防止内存泄漏
    free(del);

    return p;
}
