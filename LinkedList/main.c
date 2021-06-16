#include "./src/main/declare/Declare.h"

int main() {
    //初始化列表
    printf("初始化列表\n");
    link *p = initLink();
    display(p);

    printf("在第四的位置插入元素5\n");
    p = insertElem(p, 5, 4);
    display(p);

    printf("删除元素3\n");
    p = delElem(p, 3);
    display(p);

    printf("查找元素2的位置:");;
    int address = selectElem(p, 2);
    if (address == -1) {
        printf("无此元素\n");
    } else {
        printf("元素2的位置为:%d", address);
    }
    printf("\n");
    display(p);

    printf("更改第3的位置的数据为7\n");
    p = amendElem(p, 3, 7);
    display(p);

    return 0;
}
