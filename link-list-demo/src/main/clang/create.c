#include "./../declare/declare.h"

PNode create_list(void) {
    //用于定义链表长度
    int len;

    //用于存放节点数值
    int val;

    //创建分配一个头节点内存空间
    PNode p_head = (PNode) malloc(sizeof(Node));

    if (p_head == NULL) {// 判断是否分配成功
        printf("空间分配失败\n");
        exit(-1);
    }

    //链表的末尾节点，初始指向头节点
    PNode p_tail = p_head;

    // 最后一个节点指针置为空
    p_tail->next = NULL;
    printf("请输入节点个数:");
    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        //  分配一个新节点
        PNode p_new = (PNode) malloc(sizeof(Node));

        if (p_new == NULL) {
            printf("分配新节点失败\n");
            exit - 1;
        }
        printf("请输入第%d个节点的数据:", i + 1);
        //输入链表节点的数据
        scanf("%d", &val);

        //把数据赋值给节点数据域
        p_new->element = val;
        //末尾节点指针指向下一个新节点
        p_tail->next = p_new;
        //新节点指针指向为空
        p_new->next = NULL;
        //将新节点复制给末尾节点
        p_tail = p_new;
    }

    printf("创建链表成功\n");
    // 返回头节点
    return p_head;
}

