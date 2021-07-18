#include "../../header/declaration.h"

typedef struct DoubleDirectionLinkList {
    char data;
    /**
     * prior: it store the address of prior one node.<br>
     * next: it store the address of next one node.<br>
     */
    struct DoubleDirectionLinkList *prior, *next;
} double_link;

void head_prints_d_l(double_link *list) {
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

void rear_display(double_link *list) {
    double_link *pr;
    pr = list->next;

    while (pr) {
        //if pr->next become NULL
        if (!pr->next) {
            //the last data region in pr
            printf("\t%c", pr->data);
            return;
        }
        printf("%c\t", pr->data);
        pr = pr->next;
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

/**
 * create double direction linked list with header-insert method
 * @param list
 * @return
 */
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

double_link *create_with_rear(double_link *list) {
    int scope_num;
    double_link *tmp, *p;

    p = list = (double_link *) malloc(sizeof(double_link));

    printf("please enter scope number of link list elements:\n");
    scanf("%d", &scope_num);

    printf("please enter many link list elements value,uses space key separate:\n");
    for (int i = 0; i < scope_num; i++) {
        tmp = (double_link *) malloc(sizeof(double_link));
        scanf(" %c", &tmp->data);

        //new node connect with last one node of link list
        p->next = tmp;
        tmp->prior = p;

        //p alaways pointing to the last one node of link list
        p = p->next;
    }
    p->next = '\0';
    return list;
}

/**
 * insert into a new node before the position pos and it value is e
 * @param list
 * @return
 */
bool insert_into_in_pos(double_link *list) {
    char e;
    int position, j = 0;
    double_link *p, *s;

    p = list;

    printf("\nplease input the insert position what you want:\n");
    scanf("%d", &position);

    while (p && j < position) {//search node that position is pos,p points to this node
        p = p->next;
        j++;
    }

    if (!p || j > position) {
        printf("the position greater than list size+1 or position less than 1\n");
        return false;
    }

    //generate new node
    s = (double_link *) malloc(sizeof(double_link));

    printf("please enter the value what you want insert:\n");
    scanf(" %c", &e);
    //set data region value of new node as e
    s->data = e;

    p->prior->next = s;
    s->prior = p->prior;
    s->next = p;
    p->prior = s;
    return true;
}

/**
 * delete the node with serial order pos in double direction link list
 * 
 * @param list
 * @return
 */
bool dele_node(double_link *list) {
    double_link *p;
    int pos, j = 0;
    p = list;

    printf("\nplease input position what you want deletion:\n");
    scanf("%d", &pos);

    while (p && (j < pos)) {//search the node with it order is pos,p points to this node
        p = p->next;
        j++;
    }

    if (!p || (j > pos)) {//deletion position is illogical
        printf("deletion position is illogical\n");
        return false;
    }

    //if behind node of p exists
    if (p->next) {
        p->next->prior = p->prior;
    }

    p->prior->next = p->next;

    free(p);
    return true;
}

void double_main_export() {
    double_link *list = list_initialization();
//    printf("initialization: %p\n", list);
//    printf("initialization: %p\n", *list);

//    list = create_with_head(list);
//    head_prints_d_l(list);

    list = create_with_rear(list);
    rear_display(list);

    insert_into_in_pos(list);
    rear_display(list);

    dele_node(list);
    rear_display(list);
}