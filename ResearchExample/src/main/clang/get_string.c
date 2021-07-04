//
// Created by user on 21-7-5.
//

#include "../header/declaration.h"

/**
 * 利用指针,返回一个字符串
 * @return 该函数返回值的类型是个指针类型，并且是指向char类型的指针
 */
char *get_string() {
    /*p是一个指针，其初值指向一个字符串常量，之后可以修改它指向其它字符串，可以输出它的内容中的某个字符，但修改不了它指向的字符串的内容*/
    //在这里,*p指向字符串的第一个字符,如'z',ASCII十进制码为122
    char *p = "zzz aaa 000";

    return p;
}

void show_string() {
    char *string = NULL;

    string = get_string();
    printf("获取到的字符串:%s\n", string);
}