/*strcmp(s1, s2);
如果 s1 和 s2 是相同的，则返回 0；
如果 s1<s2 则返回小于 0；
如果 s1>s2 则返回大于 0*/

#include "./../head/header.h"

//建立数据库类型结构
void createDB(dbTypeLinkList *database[], int *length) {
    char ch[110], type[110], head[] = "编号 \0";
    int len, i;
    database[0] = (dbTypeLinkList *) malloc(sizeof(dbTypeLinkList));

    //建立数据库类型
    //strcpy(s1, s2);复制字符串 s2 到字符串 s1
    strcpy(database[0]->data, head);

    //建立数据库结构时，自动建立编号字段
    strcpy(database[0]->type, "char");

    printf("请输入字段 %d 的名称，以'$'结束输入 \n", *length);
    scanf("%s", ch);
    printf("请输入字段%d的类型(string,int,double)\n ", *length);
    scanf("%s", type);

    loop:
    while (1) {
        if (strcmp(type, "string") == 0 || strcmp(type, "double") == 0 || strcmp(type, "int") == 0) {
            break;
        } else {
            printf("您输入的类型非法，请重新输入\n");
            printf("请输入字段 %d 的类型(string,double,int)\n", *length);
            scanf("%s", type);
        }
    }

    //循环输入数据库类型，以$结束
    while (1) {
        if (strcmp(ch, "$") == 0) {
            break;
        }
        len = strlen(ch);
        ch[len] = ' ';
        ch[len + 1] = '\0';
        database[*length] = (dbTypeLinkList *)malloc(sizeof(dbTypeLinkList));

        strcpy(database[*length]->data, ch);
        strcpy(database[*length]->type, type);

        *length = *length + 1;

        printf("请输入字段 %d 的名称,以'$'结束输入", *length);
        scanf("%s", ch);

        if (strcmp(ch, "$") == 0) {
            break;
        }

        printf("请输入字段 %d 的类型 string，double，int \n", *length);
        scanf("%s", type);
        //继续输入则返回loop;
        goto loop;

    }

    //结束输入时,显示数据库字段和类型
    for (i = 0; i < *length; i++) {
        printf("%s(%s)", database[i]->data, database[i]->type);
    }
}
