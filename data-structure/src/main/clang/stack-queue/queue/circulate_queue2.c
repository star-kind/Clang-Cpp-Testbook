#include "./../../../header/exports_declaration.h"

#define maxSize 10
#define FATAL -1

typedef struct CirculateQueueStructure2 {
    /**
     * foundation address
     */
    int *base;
    int front, rear;
} cir_queue;

void init_queue2(cir_queue *que) {
    que->base = (int *) malloc(sizeof(int) * maxSize);

    if (!que->base) {// while( !(x!=NULL) )
        printf("memory allocation failed.\n");
        return;
    }

    // que.front and que.rear they are all set to 0, queue is empty
    que->front = que->rear = 0;
}

void enter_queue2(cir_queue *que, int *arr_pt) {
    int i = 0, j = 0;//must be initialized

    if ((que->rear + 1) % maxSize == que->front) {
        //if queue rear move one position towards the back and that equals queue front,it proved queue is full up
        return;
    }

    while (*(arr_pt + i++)) {
        // new element insert into queue rear
        que->base[que->rear] = *(arr_pt + j++);

        // que.rear move one position towards the back
        if ((que->rear + 1) % maxSize) {// if ((que->rear + 1) % maxSize) != 0
            que->rear = (que->rear + 1) % maxSize;
        } else {
            que->rear = j - 1;
        }
    }
}

void detach_queue2(cir_queue *que) {
    if (que->rear == que->front) {
        printf("queue is empty.\n");
        return;
    }

    // queue front move one position towards the back
    que->front = (que->front + 1) % maxSize;
}

//just copy front element value of queue, wouldn't revamp the queue.front
int get_front_elem2(cir_queue *q) {
    if (q->front != q->rear) {//queue isn't empty
        return q->base[q->front];
    }
    return FATAL;
}

int get_que_ele_quantity(cir_queue *q) {
    int n = (q->rear - q->front + maxSize);
    int remainder = n % maxSize;
    return remainder;
}

void circulates_exhibits(cir_queue *que) {
    int e, front = que->front, rear = que->rear;
    int i = front;

    while (rear-- > i) {
        e = *(que->base + front++);
        printf("element exhibition:  %d\n", e);
    }
    printf("\n");
}

void cir_que_export2() {
    int res;
    cir_queue queue;
    // 0 as terminator
    int array[] = {255, 13, 55, 18, 21, 14, 45, 300, 19, 32, 256, 0};

    init_queue2(&queue);

    enter_queue2(&queue, array);
    circulates_exhibits(&queue);

    res = get_front_elem2(&queue);
    printf("get the front elements:  %d\n", res);

    detach_queue2(&queue);
    circulates_exhibits(&queue);

    res = get_front_elem2(&queue);
    printf("get the front elements after detach queue:  %d\n", res);

    res = get_que_ele_quantity(&queue);
    printf("get quantity of element inside the queue:  %d\n", res);
}
