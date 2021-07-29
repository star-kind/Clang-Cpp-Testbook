#include "./../../../header/exports_declaration.h"

#define maxLength 100
#define binBASE 2

typedef struct SEQUENCE_STACK_STRUCT {
    int *top;
    int *base;
} sequence_stack;

void initializes_sequence_stack(sequence_stack *sequenceStack) {
    sequenceStack->base = (int *) malloc(sizeof(int) * maxLength);

    if (!sequenceStack->base) {//if !(seq-stack != 0)
        printf("seq-stack as well as empty\n");
        return;
    }

    sequenceStack->top = sequenceStack->base;
}

void pushing_node(sequence_stack *sequenceStack, int param) {
    if (sequenceStack->top - sequenceStack->base == maxLength) {
        printf("sequence_stack already full up at now\n");
        return;
    }

    *sequenceStack->top = param;
    sequenceStack->top++;
}

void exhibitions_of_stack(sequence_stack *sequenceStack) {
    sequence_stack *tmp;

    if (sequenceStack->top == sequenceStack->base) {
        printf("sequenceStack is empty at now\n");
        return;
    }

    tmp = sequenceStack;

    while (tmp->top != tmp->base) {
        tmp->top--;//imitates the pop stack
        printf("%d ", *tmp->top);
    }
}

void conversion_operations(sequence_stack *sequenceStack) {
    int deci_num, remainder;
    printf("input an decimal number that ready to conversion:\n");
    scanf("%d", &deci_num);

    do {
        remainder = deci_num % binBASE;
        pushing_node(sequenceStack, remainder);

        deci_num = deci_num / binBASE;
    } while (deci_num);

}

void dec_conv_bin_export() {
    sequence_stack sequenceStack;

    initializes_sequence_stack(&sequenceStack);
    conversion_operations(&sequenceStack);
    exhibitions_of_stack(&sequenceStack);
}
