#include "./../../../header/exports_declaration.h"

#define maxSize 7
#define FATAL -1

typedef struct CirculateQueueStructure {
    /**
     * foundation address
     */
    int *base;
    int front, rear;
} cir_queue;

void init_queue(cir_queue *que) {
    que->base = (int *) malloc(sizeof(int) * maxSize);

    if (!que->base) {// while( !(x!=NULL) )
        printf("memory allocation failed.\n");
        return;
    }

    // que.front and que.rear they are all set to 0, queue is empty
    que->front = que->rear = 0;
}

void enter_queue(cir_queue *que, int *arr_pt) {
    int i = 0, j = 0;//must be initialized

    if ((que->rear + 1) % maxSize == que->front) {
        //if queue rear move one position towards the back and that equals queue front,it proved queue is full up
        return;
    }

    while (*(arr_pt + i++)) {
        // new element insert into queue rear
        que->base[que->rear] = *(arr_pt + j++);

        // TODO que->rear become 0 when loop ending
        // que.rear move one position towards the back
        que->rear = (que->rear + 1) % maxSize;
    }
}

void detach_queue(cir_queue *que) {
    if (que->rear == que->front) {
        printf("queue is empty.\n");
        return;
    }

    // queue front move one position towards the back
    que->front = (que->front + 1) % maxSize;
}

//just copy front element value of queue, wouldn't revamp the queue.front
int get_front_elem(cir_queue *q) {
    if (q->front != q->rear) {//queue isn't empty
        return q->base[q->front];
    }
    return FATAL;
}

int get_queue_size(cir_queue *q) {
    return (q->rear - q->front + maxSize) % maxSize;
}

//TODO circulates_exhibits

void cir_que_exports() {
    int res;
    cir_queue queue;
    int array[] = {17, 13, 10, 55, 18, 21, 4};

    init_queue(&queue);

    enter_queue(&queue, array);
    res = get_front_elem(&queue);
    printf("get the front elements:  %d\n", res);

    detach_queue(&queue);
    res = get_front_elem(&queue);
    printf("get the front elements after detach queue:  %d\n", res);

    res = get_queue_size(&queue);
    printf("get the queue's size after detach queue:  %d\n", res);
}
