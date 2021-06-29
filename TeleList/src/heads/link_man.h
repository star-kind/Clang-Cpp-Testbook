//
// Created by user on 21-6-9.
//

#ifndef TELELIST_LINK_MAN_H
#define TELELIST_LINK_MAN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning (disable:4996);

//建立结构体，存放联系人信息
typedef struct LINK_MAN {
    char name[20];
    char gender[20];
    int age;
    int tel[12];
    char addr[50];
} LINK_MAN;

//把通讯录+人员统计放在结构体内
typedef struct Statis {
    // 主数据
    LINK_MAN num[1000];
    // 索引
    int count;
} Statis;

//初始化数组
void init_link_man(Statis *p);

//添加联系人信息
void Add_link_man(Statis *p);

//删除指定联系人信息
void Dele_link_man(Statis *p);

//查找指定联系人信息
void Find_link_man(Statis *p);

//修改指定联系人信息
void Revise_link_man(Statis *p);

//显示所有联系人信息
void Display_link_man(Statis *p);

//清空所有联系人信息
void Empty_link_man(Statis *p);

//以名字排序全部联系人顺序
void sort_link_man(Statis *p);

#endif //TELELIST_LINK_MAN_H
