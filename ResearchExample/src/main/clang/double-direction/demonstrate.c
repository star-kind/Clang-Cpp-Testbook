#include "../../header/declaration.h"

typedef struct DoubleDirectionLinkList {
    char data;
    /**
     * prior: it store the address of prior one node.<br>
     * next: it store the address of next one node.<br>
     */
    struct DoubleDirectionLinkList *prior, *next;
} double_link;

void prints_d_l(double_link *list) {
    double_link *p;
    p = list->next;
    printf("double linked list print exhibiting:\n");
    while (p != list) {
        if (!p) {//if p become nothingness
            return;
        }
        printf("%c\t", p->data);
        p = p->next;
    }
    printf("\n");
}

double_link *list_initialization() {
    double_link *list = (double_link *) malloc(sizeof(double_link));

    if (!list) {
        printf("constructs a pure double link list failure.\n");
        exit(0);
    }

    //set two pointer region of head node to become empty
    list->prior = list->next = NULL;
    return list;
}

/*创建双向链表有两种方法:头插法和尾插法.头插法所建之链表与输入顺序相反,称为逆序建表;
 * 尾插法创建之表与输入顺序一致,称为正序建表
 * */

//create double direction linked list with header-insert method
double_link *create_with_head(double_link *list) {
    //input value of multiple elements
    int multiple;
    double_link *s, *dpt;
    dpt = list = (double_link *) malloc(sizeof(double_link));

    //first,an empty linked list with head node is established
    dpt->prior = dpt->next = NULL;

    printf("please input quantity of elements:\n");
    scanf("%d", &multiple);

    printf("please input value of multiple in proper sequence:\n");
    while (multiple--) {
        s = (double_link *) malloc(sizeof(double_link));
        scanf(" %c", &s->data);

        if (dpt->next) {
            /*if node exists in back of the dpt,should be modify it prior pointers behind dpt,
             * otherwise,just revamp there are three pointer in the back*/
            dpt->next->prior = s;
        }
        s->next = dpt->next;
        s->prior = dpt;
        //put new node s insert into head node behind
        dpt->next = s;
    }
    return list;
}

void double_main_export() {
    double_link *list = list_initialization();
//    printf("initialization: %p\n", list);
//    printf("initialization: %p\n", *list);

    list = create_with_head(list);
    prints_d_l(list);
}