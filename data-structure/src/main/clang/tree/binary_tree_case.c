#include "../../header/exports_declaration.h"

typedef struct BINARY_TREE_NODE {
    char data;
    struct BINARY_TREE_NODE *rc, *lc;
} bin_node;

bin_node *initialization_binary_tree(bin_node *bt) {
    bt = (bin_node *) malloc(sizeof(bin_node));
    if (!bt) {
        printf("initialization does failed\n\r");
        return 0;
    }

    bt->lc = NULL;
    bt->rc = NULL;

    return bt;
}

bin_node *produce_binary_tree(bin_node *bt) {
    char ch;
    scanf("%c", &ch);

    if (ch == '.') {
        bt = NULL;
    } else {
        bt = (bin_node *) malloc(sizeof(bin_node));
        bt->data = ch;
        bt->lc = produce_binary_tree(bt->lc);
        bt->rc = produce_binary_tree(bt->rc);
    }

    return bt;
}

void previous_ergodic(bin_node *bt) {
    if (!bt) {
        printf(" # \n\r");
        return;
    }

    printf("%c ", bt->data);
    previous_ergodic(bt->lc);
    previous_ergodic(bt->rc);
}

void bin_tree_exp() {
    bin_node *bt;
    bt = initialization_binary_tree(bt);

    printf("please enter the string for products a tree:\r\n");
    bt = produce_binary_tree(bt);

    previous_ergodic(bt);
}