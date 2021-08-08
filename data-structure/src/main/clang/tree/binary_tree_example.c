#include "../../header/exports_declaration.h"

#define ERROR 0

typedef struct B_TREE {
    char data;
    struct B_TREE *left_child, *right_child;
} BT;

typedef BT *bt_ptr;

bt_ptr creates_binary_tree(bt_ptr t) {
    char data;
    scanf("%c", &data);

    if (data == '#') {
        t = NULL;
    } else {
        t = (bt_ptr) malloc(sizeof(BT));
        if (t == NULL) {
            printf("have an error\n\r");
            return ERROR;
        }
        t->data = data;
        //recurrence
        t->left_child = creates_binary_tree(t->left_child);
        t->right_child = creates_binary_tree(t->right_child);
    }

    return t;//return address of address
}

void previous_order_tree_ergodic(bt_ptr btPtr) {
    if (btPtr == NULL) {
        return;
    }
    printf("%c  ", btPtr->data);
    previous_order_tree_ergodic(btPtr->left_child);
    previous_order_tree_ergodic(btPtr->right_child);
}

void binary_tree_example_export() {
    bt_ptr head;

    printf("please enter some series character:\n\r");
    head = creates_binary_tree(head);

    previous_order_tree_ergodic(head);
}