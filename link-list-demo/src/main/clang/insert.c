#include "./../declare/declare.h"

/**
 * 在链表位置第pos节点前插入包含数据val的节点
 * @param list_obj
 * @param pos
 * @param val
 */
void insert_list(PNode list_obj, int pos, int val) {
    int position = 0;
    //    定义节点p指向头节点
    PNode p = list_obj;

    //    寻找pos节点的前驱结点
    while (p != NULL && position < pos - 1) {
        p = p->next;
        ++position;
    }

    // 分配一个临时节点用来存储要插入的数据
    PNode tmp = (PNode) malloc(sizeof(Node));
    if (tmp == NULL) {
        printf("内存分配失败\n");
        exit(-1);
    }

    tmp->element = val;
    tmp->next = p->next;
    p->next = tmp;
}
