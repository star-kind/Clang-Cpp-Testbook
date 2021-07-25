#include "./../../../header/exports_declaration.h"

#define max_size 100
#define ERR false
#define SUCCESS true

typedef struct SEQ_STACK {
    int *top;
    int *bottom;
} seq_st;

bool initialize_seq_st2(seq_st *stack) {
    stack->bottom = (int *) malloc(max_size * sizeof(int));

    if (!stack->bottom) {
        printf("memory allocation was failed\n");
        return ERR;
    }

    // stack.top.address equals stack.bottom.address, that proves this stack is empty
    stack->top = stack->bottom;

    return SUCCESS;
}

/**
 * push the new element into stack top
 * @param st
 * @param array
 * @return
 */
bool push_e2(seq_st *st, int array[]) {
    if (st->top - st->bottom == max_size) {
        printf("stack already full up\n");
        return ERR;
    }

    int *p;
    int i = 0, j = 0;
    p = array;

    while (*(p + i++)) {
        //push the new element's value into stack top
        *st->top = *(p + j++);
        //the pointer of stack top add 1
        st->top++;
    }

    return SUCCESS;
}

/**
 * delete top element of stack
 * @param st
 * @return
 */
bool pop_stack2(seq_st *st) {
    if (st->bottom == st->top) {// has no element in stack, its empty
        printf("has no element in stack, its empty\n");
        return ERR;
    }
    st->top--;// top pointer reduce 1
    return SUCCESS;
}

/**
 * get-top's function different from pop-function. get top just copy a stack-top element,pointer stack-top haven't move,quantity of element in stack haven't change.but pop-function is pointer stack-top move down one position, no longer have this element in stack
 * @param s
 * @return
 */
int get_top2(seq_st *s) {
    if (s->top != s->bottom) {//stack isn't empty
        return *(s->top - 1);//get the value of pointer top,position of pointer top haven't change
    } else {
        return 0;
    }
}

void display_seq_st2(seq_st *s) {
    if (s->top == s->bottom) {
        printf("stack is empty at now\n");
        return;
    }

    while (s->top != s->bottom) {
        s->top--;
        printf("%d  ", *s->top);
    }
    printf("\n");
}

void sequence_stack_exports2() {
    int array[] = {12, 19, 24, 33, 48, 50, 66};
    seq_st st;

    initialize_seq_st2(&st);

    push_e2(&st, array);

    int top_num = get_top2(&st);
    printf("top number:  %d\n", top_num);

    pop_stack2(&st);
    display_seq_st2(&st);
}