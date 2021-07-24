#include "./../../../header/exports_declaration.h"

typedef struct StackNode {
    int data;
    struct StackNode *next;
} st_node;

st_node *initial_linked_stack(st_node *st) {
    st = NULL;
    return st;
}

st_node *push_linked_stack(st_node *st, int array[]) {
    st_node *p, *q;
    int i = 0, j = 0;
    int *arr_p = array;

    q = st;

    while (*(arr_p + i++)) {
        p = (st_node *) malloc(sizeof(st_node));
        p->data = *(arr_p + j++);

        //let new node p's next-region points to q,that means take q's address set into next-region of new node
        p->next = q;
        // revamp p become to top pointer of stack
        q = p;
    }

    return st;
}

//pop stack equals deletes top element of stack,let top pointer of stack points to next node,and next release memory of this node
void pop_stack_node(st_node *st) {
    st_node *p;

    //use p sava the address of stack top element for release
    p = st;

    //revamp top pointer of stack,let it points to next node
    st = st->next;

    free(p);
}

// get top element of stack st,top pointer of stack remain unchanged
int get_top_node(st_node *st) {
    if (st) {
        return st->data;
    } else {
        printf("no element in stack\n");
        return -1;
    }
}

//TODO
void linked_stack_export() {
    st_node *st;
    int array[] = {12, 14, 16, 17, 19, 22, 24, 26, 29};
    int res;

    st = initial_linked_stack(st);

    push_linked_stack(st, array);
    res = get_top_node(st);
    printf("result:  %d\n", res);

    pop_stack_node(st);
    printf("2.result:  %d\n", res);
}