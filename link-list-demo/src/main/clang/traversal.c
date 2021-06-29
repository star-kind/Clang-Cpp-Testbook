#include "./../declare/declare.h"

void traversal_list(PNode list_obj) {
    //首节点赋值给临时节点P
    PNode p = list_obj->next;
    printf("遍历链表的值为\n");

    if (p == NULL) {
        printf("链表为空\n");
    }

    //当临时节点P不为尾节点时，输出当前节点值
    while (p != NULL) {
        printf("%d\t", p->element);
        p = p->next;
    }
    printf("\n");
}
