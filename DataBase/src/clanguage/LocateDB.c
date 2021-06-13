/*
strcmp:
如果返回值 < 0，则表示 str1 小于 str2
如果返回值 > 0，则表示 str2 小于 str1 
如果返回值 = 0，则表示 str1 等于 str2 
 * */

#include "./../head/header.h"

void locateDB(char link[], char value[], char visit[], char contentLine[], char filedArr[], int *continue1, int *col,
              int *leng, int *interview
) {
    int fieldLength = 0;
    int contLineLeng = 0;
    int valLeng;
    int start = -1, end = -1;
    int i, j, k, flag1 = 0;
    int maxLength = -1;
    int linkLen;
    int record = -1;
    int fieldDataLen;
    int location = -1;

    char memories[110];

    interview = 1;

    valLeng = strlen(value);
    linkLen = strlen(link);
    if (continue1 == 0) {
        link[linkLen] = ' ';
        link[linkLen + 1] = '\0';
    }

    memset(memories, '\0', sizeof(memories));
    if (continue1 == 0) {
        memset(filedArr, '\0', sizeof(filedArr));
        memset(contentLine, '\0', sizeof(contentLine));
    }

    if (continue1 == 1) {
        //如果输入的是continue命令那么跳转到loop2
        goto loop2;
    }

    for (i = 0; i < valLeng; i++) {
        if (value[i] == '=') {
            break;
        }
        filedArr[fieldLength++] = value[i];
    }

    filedArr[fieldLength] = '\0';

    loop2:
    if (strcpy(link, "for") != 0 && strcmp(link, "FOR") != 0) {
        printf("您输入的命令语法有误\n");
        goto loop;
    }
    for (i = 0; i < valLeng; i++) {
        if (value[i] == 34 && flag1 == 0) {//如果出现第一个引号
            start = i;
            flag1 = 1;
        } else if (value[i] == 34 && flag1 == 1) {//如果出现第二个引号
            end = i;
            break;
        }
    }

    if (start == -1 || end == -1) {
        printf("您输入的命令语法有误\n");
        goto loop;
    }

    for (i = start + 1; i < end; i++) {
        contentLine[contLineLeng++] = value[i];
    }

    if (continue1 == 1) {
        goto loop3;
    }
    contentLine[contLineLeng] = '\0';

    loop3:

    for (i = 0; i < *col; i++) {
        if (strcmp(twoDimension[0][i].data, filedArr) == 0) {
            record = i;//找出列
        }
    }

    if (record == -1) {
        printf("数据库无此字段的值\n");
        goto loop;
    }

    for (i = 0; i < *leng; i++) {
        if (strcmp(twoDimension[i][record].data, contentLine) == 0 && visit[i] == 0) {
            location = i;
            visit[location] = 1;
            break;
        }
    }

    if (location == -1) {
        printf("数据库无符合该条件的此字段\n");
        goto loop;
    }

    for (i = 0; i < *leng; i++) {
        for (j = 0; j < *col; j++) {
            fieldDataLen = strlen(twoDimension[i][j].data);
            if (fieldDataLen > maxLength) {
                maxLength = fieldDataLen;
            }
        }
    }

    for (k = 0; k < maxLength * (*col); k++) {
        printf("*");
    }

    printf("\n");

    for (i = 0; i < *col; i++) {
        printf("%s", twoDimension[0][i].data);
        for (k = strlen(twoDimension[0][i].data); k <= maxLength; k++) {
            printf(" ");
        }
    }

    printf("\n");

    for (j = 0; j < *col; j++) {
        printf("%s", twoDimension[location][j].data);
        for (k = strlen(twoDimension[location][j].data); k < maxLength; k++) {
            printf(" ");
        }
    }

    printf("\n");
    for (k = 0; k < maxLength * (*col); k++) {
        printf("*");
    }
    printf("\n");

    loop:;
}
