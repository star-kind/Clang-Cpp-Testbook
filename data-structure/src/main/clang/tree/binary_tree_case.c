#include "./../../header/exports_declaration.h"

typedef struct BINARY_TREE_NODE {
    int data;
    struct BINARY_TREE_NODE *left_child, *right_child, *parent;
} b_node, *b_tree;

void creat_tree_asks(b_tree bt) {
    //check it whether or create left and right children
    char check;

    bt = (b_tree *) malloc(sizeof(b_tree));

    printf("please enter info of node:\n\r");
    scanf("%d",bt->data);
    // asking left
    printf("whether or not add the LEFT child of %d:  (y/n)", bt->data);
    scanf("%c", check);

    if (check == 'y') {
        creat_tree_asks(bt->left_child);
    } else {
        bt->left_child = NULL;
    }

    // asking right
    printf("whether or not add the RIGHT child of %d:  (y/n)", bt->data);
    scanf("%c", check);
    if (check == 'y') {
        creat_tree_asks(bt->right_child);
    } else {
        bt->right_child = NULL;
    }
}

//TODO
