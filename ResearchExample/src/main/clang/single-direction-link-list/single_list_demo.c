#include "../../header/declaration.h"

#define max_size 6

typedef struct SingleNode {
    int data;
    struct SingleNode *next;
} singleNode;

singleNode *initializing(singleNode *link_list) {
    link_list=(singleNode *) malloc(sizeof (singleNode));
    //TODO
}