#include "./../../../header/exports_declaration.h"

typedef struct QueueNode {
    int data;
    struct QueueNode *next;
} que_node;

typedef struct LinkQueue {
    que_node *front;
    que_node *rear;
} link_queue;

void initialization_LQ(link_queue *lin_que) {
    //generate head node,front pointer and rear pointer both points to head node
    lin_que->front = lin_que->rear = (que_node *) malloc(sizeof(que_node));
    lin_que->front->next = NULL;
}

void enter_linked_queue(link_queue *lq, int *arr_ptr) {
    int i = 0, n = 0;
    que_node *tmp;

    while (*(arr_ptr + i++)) {
        tmp = (que_node *) malloc(sizeof(que_node));
        tmp->data = *(arr_ptr + n++);
        tmp->next = NULL;

        //new node insert into link_queue's rear
        lq->rear->next = tmp;

        //rear pointer move toward back(set address of node tmp into pointer rear)
        lq->rear = tmp;
    }
}

void detached_queue_node(link_queue *lq) {
    que_node *p;

    if (lq->front == lq->rear) {
        printf("empty link queue.\n");
        return;
    }

    p = lq->front->next;
    lq->front->next = p->next;

    if (lq->rear == p) {
        printf("if just only one element exists in link queue, pointer rear need to revamped after deleted.\n");
        lq->rear = lq->front;
    }
    free(p);
}

/**
 * get head element of link_queue for return, would not change the pointer front of link queue
 * @param lq
 * @return
 */
int get_header_node_value(link_queue *lq) {
    int result = -1;
    //link queue isn't empty
    if (lq->front != lq->rear) {
        result = lq->front->next->data;
    }
    return result;
}

void link_queue_exhibited_circulate(link_queue *lq) {
    que_node *ptr;
    ptr = lq->front->next;

    while (ptr) {//while ptr != NULL
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void LQ_test_export() {
    int number;
    link_queue lq;
    // 0 as terminator
    int array[] = {256, 513, 328, 559, 1029, 481, 0};

    initialization_LQ(&lq);

    enter_linked_queue(&lq, array);
    link_queue_exhibited_circulate(&lq);

    number = get_header_node_value(&lq);
    printf("first node's value before detach: %d\n", number);

    detached_queue_node(&lq);
    link_queue_exhibited_circulate(&lq);

    number = get_header_node_value(&lq);
    printf("node's value after detached: %d\n", number);
}