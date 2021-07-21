#include "../../../header/exports_declaration.h"

typedef struct LINKLIST {
    char data;
    struct LINKLIST *next;
} link;

link *initial_link(link *node) {
    node = (link *) malloc(sizeof(link));
    node->next = NULL;
    return node;
}

/**
 * linked list created by rear-insert method,it will include a header node
 * @param list
 * @return
 */
link *tail_creates(link *list) {
    int quantity;
    link *pin_new, *tail;
    tail = list;

    //decide list node quantity
    printf("please enter the quantity of your decision:\n");
    scanf("%d", &quantity);

    printf("please input multiple values:\n");
    //enter value inside quantity
    while (quantity--) {
        pin_new = (link *) malloc(sizeof(link));

        scanf(" %c", &pin_new->data);
        pin_new->next = NULL;

        //take the new node pin_new insert into behind tail node
        tail->next = pin_new;

        //node tail points to the new node pin_new
        tail = pin_new;
    }
    return list;
}

void circulate_link_list(link *list) {
    link *p;
    p = list->next;

    while (p != NULL) {
        printf("%3c", p->data);
        p = p->next;
    }
    printf("\n");
}

void reverse_single_list_order(link *list) {
    link *p, *s;

    //p points to the first element of node list
    p = list->next;

    //set the next-region of node header to NULL
    list->next = NULL;

    while (p != NULL) {
        s = p->next;//s pointing to next node of p,records the break point

        //head-insert method,set the next node address of list to next-region of p
        p->next = list->next;

        //set the node address of p to next-region of list
        list->next = p;

        //keep toward back moving,p points to s
        p = s;
    }
}

/**
 * to reverse the order of elements in the single direction link list x,
 * the list x has a head node
 */
void reverse_s_d_exports() {
    link *list;
    list = initial_link(list);

    list = tail_creates(list);
    circulate_link_list(list);

    reverse_single_list_order(list);
    circulate_link_list(list);
}