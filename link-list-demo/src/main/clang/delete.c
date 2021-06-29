#include "./../declare/declare.h"

/**
 * 定义删除整个链表
 * @param list_obj
 */
void delete_whole_list(PNode list_obj) {
    PNode p, tmp;
    //定义指针P指向链表要删除的链表List的第一个点节点
    p = list_obj->next;

    list_obj->next = NULL;
    while (p != NULL) {
        //临时Tmp指向要删除的节点的下个节点
        tmp = p->next;

        //释放指针P指向的节点
        free(p);

        //重新赋值
        p = tmp;
    }
    printf("删除链表成功\n");
}

/**
 * 删除链表中的第pos节点
 * @param list_obj
 * @param pos
 */
void delete_list_ele(PNode list_obj, int pos) {
    int position = 0;
    //    定义一个指针p指向链表头节点
    PNode p = list_obj;

    //    寻找pos节点位置的前驱节点
    while (p != NULL && position < pos - 1) {
        p = p->next;
        ++position;
    }

    //    定义临时指针Tmp指向要删除的节点
    PNode tmp = p->next;

    //    使要删除节点的前驱结点指向其后驱节点
    p->next = tmp->next;

    //    释放删除节点的内存空间，防止内存泄漏
    free(tmp);

    //    使tmp指向空指针，防止产生野指针
    tmp = NULL;
}
