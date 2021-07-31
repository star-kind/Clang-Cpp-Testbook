#include "./../../../header/exports_declaration.h"

#define maxSize 10

typedef struct DOUBLE_DIRECTION_QUEUE {
    int base[maxSize];
    int front, rear;
} double_direction_queue;

void init_double_direction_queue(double_direction_queue *q) {
    q->front = q->rear = 0;
}

int whetherFull(double_direction_queue *q) {
    //queue's rear add one position that equals queue's front,it proves queue has full up
    if ((q->rear + 1) % maxSize == q->front) {
        return true;
    }
    return false;
}

void push_back_part(double_direction_queue *q, int value) {
    if (whetherFull(q)) {
        return;
    }

    //put it into rear
    q->base[q->rear] = value;
    //move one position toward back
    q->rear = (q->rear + 1) % maxSize;
}

int pop_back_part(double_direction_queue *q) {
    if (whetherFull(q)) {
        return false;
    }

    //move one position toward front
    q->rear = (q->rear - 1 + maxSize) % maxSize;

    // get data by obj uses
    int obj = q->base[q->rear];

    return obj;
}

void push_front_part(double_direction_queue *q, int param) {
    if (whetherFull(q)) {
        return;
    }

    //move one position toward front
    q->front = (q->front - 1 + maxSize) % maxSize;
    //set into param
    q->base[q->front] = param;
}

int pop_front_part(double_direction_queue *q) {
    if (whetherFull(q)) {
        return false;
    }

    int obj = q->base[q->front];
    //move one position toward back
    q->front = (q->front + 1) % maxSize;

    return obj;
}

void get_front_node(double_direction_queue *q, int *res) {
    if (whetherFull(q)) {
        return;
    }
    *res = q->base[q->front];
}

void get_back_node(double_direction_queue *q, int *res) {
    if (whetherFull(q)) {
        return;
    }
    *res = q->base[(q->rear - 1 + maxSize) % maxSize];
}

int get_queue_len(double_direction_queue *q) {
    int len;
    len = (q->rear - q->front + maxSize) % maxSize;
    return len;
}

void ergodic_double_queue(double_direction_queue *q) {
    if (whetherFull(q)) {
        return;
    }

    int temp = q->front;
    while (temp != q->rear) {
        printf("%d\r\n", q->base[temp]);
        temp = (temp + 1) % maxSize;
    }
    printf("\r\n");
}

void front_queue_operation(double_direction_queue *queue) {
    int index = 0, member = 0;
    int obj, para;
    int arr_front[] = {15, 19, 30, 45, 69};

    while (arr_front[index++]) {
        push_front_part(queue, arr_front[member++]);
    }
    ergodic_double_queue(queue);

    get_front_node(queue, &para);
    printf("get result return from get_front_node: %d\n", para);

    obj = pop_front_part(queue);
    printf("value that being pop out queue by pop_front_part: %d\n", obj);

    ergodic_double_queue(queue);
}

void back_queue_operation(double_direction_queue *queue) {
    int index = 0, member = 0;
    int obj, para;
    int arr_rear[] = {215, 109, 310, 745, 1309};

    while (arr_rear[index++]) {
        push_back_part(queue, arr_rear[member++]);
    }
    ergodic_double_queue(queue);

    get_back_node(queue, &para);
    printf("get result return from get_back_node: %d\n", para);

    obj = pop_back_part(queue);
    printf("value that being pop out queue by pop_back_part: %d\n", obj);

    ergodic_double_queue(queue);
}

void double_queue_case_export() {
    double_direction_queue queue;
    init_double_direction_queue(&queue);

//    front_queue_operation(&queue);
    back_queue_operation(&queue);
}