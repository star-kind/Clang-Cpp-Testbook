//
// Created by user on 21-6-9.
//

#include "../../heads/link_man.h"

/**
 * 初始化数组
 * @param p
 */
void init_link_man(Statis *p) {
    // a->b Equals (*a).b
    int count = sizeof(p->num);
    p->count = 0;
    //memset 一字节一字节地把整个数组设置为一个指定的值
    memset(p->num, 0, count);
}

/**
 * 对于一个联系人是否存在,封装一个函数,在后面的修改、删除、查找可以用到
 * @param p
 * @param pname
 * @return
 */
int find(Statis *p, char *pname) {
    int i = 0;
    for (i = 0; i < (p->count); i++) {
        if (strcmp(p->num[i].name, pname) == 0)
            return i;
    }

    return -1;
}


//修改联系人时所用到的菜单
void menu1() {
    printf("**************************\n");
    printf("***  *1.name     *2.gender      ***\n");
    printf("***  *3.age      *4.telephone   ***\n");
    printf("***  *5.address  *0.return      ***\n");
    printf("**************************\n");
}

void Add_link_man(Statis *p) {
    printf("请输入你要添加的联系人姓名:\n");
    scanf("%s", p->num[p->count].name);

    printf("请输入你要添加的联系人性别:\n");
    scanf("%s", p->num[p->count].gender);

    printf("请输入你要添加的联系人年龄:\n");
    scanf("%d", &(p->num[p->count].age));

    printf("请输入你要添加的联系人电话:\n");
    scanf("%s", p->num[p->count].tel);

    printf("请输入你要添加的联系人地址:\n");
    scanf("%s", p->num[p->count].addr);

    if ((p->count) > 1000) {
        printf("联系人已达到上限\n");
    } else {
        printf("添加成功\n");
        p->count++;
    }
}

/**
 * 删除指定联系人信息
 * @param p
 */
void Dele_link_man(Statis *p) {
    char name[20] = {0};
    int result = 0;
    int n = 0;
    int i = 0;
    printf("请输入要删除的联系人的姓名:");
    scanf("%s", name);
    result = find(p, name);

    if (result != -1) {
        printf("你是否删除此人？\n");
        printf("删除请按1,不删除请按0\n");
        scanf("%d", &n);
        if (n == 1) {
            for (i = 0; i < (p->count) - 1; i++) {
                p->num[i] = p->num[i + 1];
            }

            p->count--;
            printf("删除成功");

        } else {
            printf("删除失败");
        }
    } else {
        printf("你要删除的人不存在");
    }
}

//找联系人
void Find_link_man(Statis *p) {
    char name[20] = {0};

    int result = 0;

    printf("输入要查找的联系人姓名\n");
    scanf("%s", name);

    result = find(p, name);

    if (result != -1) {
        printf("姓名= %s \n", p->num[result].name);
        printf("性别= %s \n", p->num[result].gender);
        printf("年龄= %d \n", p->num[result].age);
        printf("电话= %s \n", p->num[result].tel);
        printf("地址= %s \n", p->num[result].addr);
    } else {
        printf("你要查找的人不存在'\n");
    }
}


//修改联系人
void Revise_link_man(Statis *p) {
    char name[20] = {0};

    int result = 0;

    printf("请输入你要修改的联系人姓名\n");
    scanf("%s", name);

    result = find(p, name);

    if (result != -1) {
        printf("姓名= %s \n", p->num[result].name);
        printf("性别= %s \n", p->num[result].gender);
        printf("年龄= %d \n", p->num[result].age);
        printf("电话= %s \n", p->num[result].tel);
        printf("地址= %s \n", p->num[result].addr);
        //
        int i = 0;
        do {
            menu1();
            printf("请输入你要修改的选项：\n");
            scanf("%d", &i);

            switch (i) {
                case 1:
                    printf("请把姓名改为:\n");
                    scanf("%s", p->num[result].name);
                    break;

                case 2:
                    printf("请把性别改为:\n");
                    scanf("%s", p->num[result].gender);
                    break;

                case 3:
                    printf("请把年龄改为:\n");
                    scanf("%d", &(p->num[result].age));
                    break;

                case 4:
                    printf("请把电话改为:\n");
                    scanf("%s", p->num[result].tel);
                    break;

                case 5:
                    printf("请把地址改为:\n");
                    scanf("%s", p->num[result].addr);
                    break;

                case 0:
                    break;

                default:
                    printf("输入错误");
                    break;
            }
        } while (i);
    } else {
        printf("你要修改的联系人不存在\n");
    }
}

/**
 *
 * @param p
 */
void Display_link_man(Statis *p) {
    int i = 0;
    printf("输出全部联系人的信息:\n");
    printf("%10s %7s %6s %8s %10s \n", "名字", "性别", "年龄", "电话", "地址", "住址");

    for (i = 0; i < (p->count); i++) {
        printf("%11s", p->num[i].name);
        printf("%8s", p->num[i].gender);
        printf("%5d", p->num[i].age);
        printf("%10s", p->num[i].tel);
        printf("%12s", p->num[i].addr);
        printf("\n");
    }
}

/**
 * 清空联系人
 * @param p
 */
void Empty_link_man(Statis *p) {
    p->count = 0;
}

/**
 * 以名字排序联系人,冒泡;
 * @param p
 */
void sort_link_man(Statis *p) {
    int i = 0;
    int j = 0;
    for (i = 0; i < p->count - 1; i++) {
        for (j = 0; j < p->count - 1 - i; j++) {
            //strcmp 用于比较两个字符串,并根据比较结果返回整数
            if (strcmp(p->num[j].name, p->num[j + 1].name) > 0) {
                LINK_MAN tmp;
                tmp = p->num[j];
                p->num[j] = p->num[j + 1];
                p->num[j + 1] = tmp;
            }
        }
    }
}

