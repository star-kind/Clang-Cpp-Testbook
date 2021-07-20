#include "../../../header/exports_declaration.h"

typedef struct LinkList {
    int data;
    struct LinkList *next;
} link_list;

/**
 * single direction link list initialization
 * @param list
 * @return
 */
link_list *initialize(link_list *list) {
    list = (link_list *) malloc(sizeof(link_list));
    if (list == NULL) {
        printf("list==NULL");
        return 0;
    }
    list->next = NULL;
    return list;
}

/**
 * ergodic prints this link list
 * @param list
 */
void ergodic_print_ls(link_list *list) {
    link_list *p1;
    p1 = list->next;
    if (p1 == NULL) {
        printf("\nempty link list\n");
        return;
    }

    printf("ergodic print link list:\n");
    do {
        printf("%d\t", p1->data);
        p1 = p1->next;
    } while (p1 != NULL);
    printf("\n");
}

/**
 * 基于头插法创建
 * @param list
 * @return
 */
link_list *created_base_on_head(link_list *list) {
    //输入 quantum 个元素的值,建立到头结点的单链表
    int quantum;

    //定义一个指针变量
    link_list *s, *point;

    point = list;//使两枚指针指向同一块内存空间
    point->next = NULL;//先建立一个带头结点的空链表

    //请输入元素个数
    printf("please input element quantum:\n");
    scanf
            ("%d", &quantum);

    //请依次输入 quantum 个元素的值
    printf("please enter the values of QUANTUM elements in proper order:\n");
    //头插法创建单链表
    while (quantum--) {
        //生成新的节点 s
        s = (link_list *) malloc(sizeof(link_list));

        //输入元素值,赋值给新节点的数据域
        scanf("%d", &s->data);

        s->next = point->next;

        //将新节点 s 插入头结点之后
        point->next = s;
    }

    return list;
}

/**
 * 尾插法创建单链表
 * @param list
 * @return
 */
link_list *create_base_on_rears(link_list *list) {
    //输入 quantity 个元素值,建立带头结点的单链表
    int quantity;
    link_list *s, *rear;

    list->next = NULL;//先行建立一个带头结点的空链表
    rear = list;//尾指针 rear 指向头结点

    //请输入元素个数
    printf("please input quantity of elements:\n");
    scanf("%d", &quantity);

    //请依次输入 quantity 个元素的的值
    printf("please input values of quantity elements in order proper:\n");
    //尾插法创建单链表
    while (quantity--) {
        //生成新节点
        s = (link_list *) malloc(sizeof(link_list));
        //输入元素值,赋予给新节点的数据域
        scanf("%d", &s->data);
        s->next = NULL;

        //将新节点s插入尾结点rear之后
        rear->next = s;
        //rear 指向新的尾结点 s
        rear = s;
    }

    return list;
}

/**
 * 单链表中取值,查找第 i 个元素，用 e 记录第 i 个元素的值
 * @param list
 * @param i
 * @return
 */
int get_position_elem(link_list *list, int i) {
    int j = 1, e;//j是计数器

    link_list *pitr;

    //指向第一个数据节点
    pitr = list->next;

    while (j < i && pitr) {//按顺序向后扫描链表，直至pitr指向第i个元素或pitr为空
        //pitr 指向下一个节点
        pitr = pitr->next;
        j++;
    }

    //当i值不合法，即i大于链表长度或i小于等于0,终止程序
    if (!pitr || j > i) {
        printf("\nProblems Appears\n");
        exit(0);
    }

    //取第i个节点的数据域
    e = pitr->data;
    printf("get element e:%d\n", e);
    return e;
}

/**
 * 查找值为e的元素
 * @param list
 * @return
 */
bool locate_elem_by_value(link_list *list) {
    bool res;
    int e, i = 1;
    link_list *ptr;
    ptr = list->next;

    //输入要查找的值
    printf("\nplease input the value you are looking for:\n");
    scanf("%d", &e);

    //沿着链表向后扫描，直到p为空或者p☞节点数据域等于e
    while (ptr && ptr->data != e) {
        ptr = ptr->next;//指向下一个节点
        ++i;
    }

    //如果查找查找失败，那么ptr为NULL
    if (!ptr) {
        printf("\nthere is no such value\n");
        res = false;
    } else {
        printf("\nthe value it does exist,position:%d\n", i);
        res = true;
    }

    return res;
}

/**
 * 在第pos位置之前插入e值<br>
 * return a Boolean Value prove whether the operation was successful
 * @param list
 * @return
 */
bool insert_before_position(link_list *list) {
    int j = 0, pos, e;
    bool sign = true;
    link_list *ptr, *s;
    ptr = list;

    printf("please enter the position that you want inserting\n");
    scanf("%d", &pos);

    //find the No (pos-1) node,ptr points to this node
    while (ptr && j < pos - 1) {
        ptr = ptr->next;
        j++;
    }

    //pos greater than (list.size+1) or pos less than 1
    if (!ptr || j > pos - 1) {
        printf("\nthis insertion position isn't correct\n");
        sign = false;
        return sign;
    }

    s = (link_list *) malloc(sizeof(link_list));

    printf("\nplease enter the value that you want inserts\n");
    scanf("%d", &e);
    s->data = e;//put value E into data area in S

    //make pointer-area of new node points to the NO.pos node
    s->next = ptr->next;
    //make pointer-region of node PTR points to the node S
    ptr->next = s;

    return sign;
}

/**
 * delete function of single direction link list<br>
 * return a boolean value prove whether the operation was successful or failure<br>
 * delete the node position that order is pos
 * @param list
 * @return
 */
bool delete_ele_link_list(link_list *list) {
    bool proved = true;
    link_list *ptr, *tmp;
    int j = 0, pos;

    ptr = list;

    printf("please enter the delete position that you want\n");
    scanf("%d", &pos);

    //search the node that position order is (pos-1),ptr points to it
    while ((ptr->next) && (j < pos - 1)) {
        ptr = ptr->next;
        j++;
    }

    //the position of delete that you want is illogical,when pos greater than list size or pos less than 1
    if (!(ptr->next) || (j > pos - 1)) {
        proved = false;
        return proved;
    }

    //temporary save address of node that deleted,for release it space
    tmp = ptr->next;

    //giving next one node address of node tmp to pointer region of node ptr
    ptr->next = tmp->next;

    //release space of deleted node
    free(tmp);

    return proved;
}

void _s_l_d_this_export() {
    link_list *list;

    list = initialize(list);

    //created_base_on_head(list);
    create_base_on_rears(list);
    ergodic_print_ls(list);

//    int res = get_position_elem(list, 7);
//    printf("get element res:%d\n", res);s

//    bool r = locate_elem_by_value(list);
//    printf("the value whether or not exist:%d\n", r);

//    bool sign_res = insert_before_position(list);
//    printf("is the operation successful:%d\n", sign_res);
//    ergodic_print_ls(list);

    bool flag = delete_ele_link_list(list);
    printf("the deletes operation result:%d\n", flag);
    ergodic_print_ls(list);
}