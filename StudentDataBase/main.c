#include <stdio.h>
#include "./src/declare/Declare.h"

void main() {
    struct student *head = NULL;

    //用到指针都记得要先初始化，分配空间，这是习惯
    head = malloc(sizeof(struct student));

    head->next = NULL;

    mainWindow();

    while (1) {
        readData(head);
        checkOrder(head);
        writeData(head);
    }
}