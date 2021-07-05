#include "../header/declaration.h"

void pointer_character() {
    char *p;
    //malloc:动态分配内存;在此处作用是初始化指针
    p = (char *) malloc(sizeof(char));

    char c = 'C';

    *p = c;

    printf("p:%s \n", p);

    // *p:此指针指向的内存地址中,存放的内容;在此处会输出16进制ASCII编码值
    printf("*p:%p \n", *p);

    // &：取某数据(变量)的地址,描述当前变量的内存位置
    printf("&p:%x \n", &p);

    free(p);
}

