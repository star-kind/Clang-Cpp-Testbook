#include "../../header/exports_declaration.h"

typedef struct BINARY_TREE_STRUCTURE {
    char data;
    struct BINARY_TREE_STRUCTURE *left, *right;
} bin_tree;

bin_tree * initiate_tree(bin_tree *bt) {
    bt = (bin_tree *) malloc(sizeof(bin_tree));

    if (bt == NULL) {
        printf("initiate tree FATAL\n\r");
        return 0;
    }
    bt->left = NULL;
    bt->right = NULL;

    return bt;
}

bin_tree *create_bin_tree(bin_tree *bt) {
    char value;
    scanf("%c", &value);

    if (value == '#') {
        bt = NULL;
    } else {
        bt = (bin_tree *) malloc(sizeof(bin_tree));
        bt->data = value;
        //recurrence
        bt->left = create_bin_tree(bt->left);
        bt->right = create_bin_tree(bt->right);
    }

    return bt;
}

void previous_order_ergodic(bin_tree *bt) {
    if (bt == NULL) {
        printf(" # ");
        return;
    }
    printf("%c  ", bt->data);
    //recurrence
    previous_order_ergodic(bt->left);
    previous_order_ergodic(bt->right);
}

void bin_tree_operation_exp() {
    bin_tree *bt;
    bt = initiate_tree(bt);

    printf("please enter some series character:\n\r");
    bt = create_bin_tree(bt);

    previous_order_ergodic(bt);
}