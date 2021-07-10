#include "../header/declaration.h"

#define length sizeof(node)

typedef struct node {
    int data;
    struct node *next;
} node;

/**
 *
 * @param res_ptr
 */
void ergodic_1(node *res_ptr) {
    printf("ergodic_1 print:\n");
    while (res_ptr->next != NULL) {
        printf("%3d\t", res_ptr->data);
        res_ptr = res_ptr->next;
    }
    printf("\nthe tail node: %d", res_ptr->data);
}

node *get_res_list() {
    struct node *p, *q, *head;

    /*为两个指针分配同一块内存,令它们指向同一地址,如此,p所指地址和对应值变化时,head也随之改变*/
    head = p = (node *) malloc(length);

    printf("please input(head element): ");
    scanf("%d", &p->data);//头部节点数据成员

    while (p->data != 0) {//以 输入0 为结束循环条件
        q = p;
        p = (node *) malloc(sizeof(length));

        printf("please input(middle node):");
        scanf("%d", &p->data);//中间节点数据成员
        q->next = p;//中间节点的指针成员值
    }
    //尾结点指针成员值
    p->next = NULL;

    return head;
}

/**
 * 单链表-1
 */
void single_direction_export_1() {
    struct node *res_ptr;
    res_ptr = get_res_list();

    ergodic_1(res_ptr);
}

