#include "../declare/Declare.h"

void display(link *p) {
    //将temp指针重新指向头结点
    link *temp = p;

    //只要temp指针指向的结点的next不是Null，就执行输出语句
    while (temp->next) {
        temp = temp->next;
        printf("%4d", temp->elem);
    }
    printf("\n");
}
