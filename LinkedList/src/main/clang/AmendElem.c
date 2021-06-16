#include "../declare/Declare.h"

/*
 * 链表中修改结点的数据域，通过遍历的方法找到该结点，然后直接更改数据域的值
 */

//更新函数,其中,add表示更改结点在链表中的位置,newElem为新的数据域的值
link *amendElem(link *p, int add, int newElem) {
    link *temp = p;

    //temp指向首元结点
    temp = temp->next;

    //temp指向被删除结点
    for (int i = 1; i < add; i++) {
        temp = temp->next;
    }
    temp->elem = newElem;

    return p;
}
