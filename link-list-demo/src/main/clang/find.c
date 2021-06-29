#include "./../declare/declare.h"

PNode find_list(PNode list_obj) {
    // 定义临时指针P指向首节点的地址
    PNode p = list_obj->next;
    //用于记录链表节点位置
    int num = 0;
    //用于存放要查询的值
    int val = 0;

    printf("请输入要查询的数:");
    //输入要查询的数值
    scanf("%d", &val);
    while (p != NULL && p->element != val) {
        p = p->next;
        ++num;
    }

    if (p != NULL) {
        printf("找到的节点为:%d", num+1);
    } else {
        printf("找不到此节点");
    }

    printf("\n");
    return p;
}
