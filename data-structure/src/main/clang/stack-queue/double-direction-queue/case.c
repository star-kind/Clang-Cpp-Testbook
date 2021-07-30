#include "./../../../header/exports_declaration.h"

#define maxSize 100

typedef struct DOUBLE_DIRECTION_QUEUE {
    int base[maxSize];
    int front, rear;
} double_direction_queue;

void init_double_direction_queue(double_direction_queue *q) {
    q->front = q->rear = 0;
}

int whetherFull(double_direction_queue *q){

}
