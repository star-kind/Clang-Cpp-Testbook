#include "./../head/header.h"

void deleteDB(char memberArr[], int *column, int *total) {
    //接收输入的for命令，value为接收所要删除字段的名称和内容
    // fieldArr 数组为接收要查找的字段，contentArr 为要查找字段的内容
    char link[110], value[110], fieldArr[110], contentArr[110];

    int contentLen = 0,
            valueSize,
            start = -1, end = -1,
            i, j,
            flag = 0,
            linkLength,
            record = -1,
            location = -1,
            fieldLen = 0;

    //接收输入的for
    scanf("%s", link);

    //接收for后面的字符
    scanf("%s ", value);

    valueSize = strlen(value);
    linkLength = strlen(link);

    link[linkLength] = ' ';
    link[linkLength + 1] = '\0';

    memset(memberArr, '\0', sizeof(memberArr));
    memset(fieldArr, '\0', sizeof(fieldArr));
    memset(contentArr, '\0', sizeof(contentArr));

    //获取要查找的字段名称
    for (i = 0; i < valueSize; i++) {
        if (value[i] == '=') {
            break;
        }
        fieldArr[fieldLen++] = value[i];
    }

    fieldArr[fieldLen] = '\0';
    if (strcmp(link, "for") != 0) {
        printf("您输入的命令存在语法错误\n");
        goto loop;
    }

    for (i = 0; i < valueSize; i++) {
        if (value[i] == 34 && flag == 0) { //遇见第一个双引号下标
            start = i;
            flag = 1;

        } else if (value[i] == 34 && flag == 1) {//遇见最后一个双引号
            end = i;
            break;
        }
    }

    //如果没有遇见一对双引号代表输入的语法有错误
    if (start == -1 || end == -1) {
        printf("您输入的命令存在语法错误\n");
        goto loop;
    }

    //把双引号之间的字符存在lx中
    for (i = start + 1; i < end; i++) {
        contentArr[contentLen++] = value[i];
    }

    contentArr[contentLen] = '\0';

    for (i = 0; i < *column; i++) {
        if (strcmp(twoDimension[0][i].data, fieldArr) == 0) {//在twoDimension中匹配字段，如果匹配成功则记录其列坐标
            record = i;
        }
    }

    if (record == -1) {
        printf("数据库中没有这个字段的值\n");
        goto loop;
    }

    for (i = 0; i < *total; i++) {
        if (strcmp(twoDimension[i][record].data, contentArr) == 0) {//如果匹配到该行，则location变量定位到该行
            location = i;
            break;
        }
    }

    if (location == -1) {
        printf("数据库中无符合该条件的内容\n");
        goto loop;
    }

//如果匹配到该行，则 location 变量定位到该行
    for (i = location; i < *total - 1; i++) {
        for (j = 0; j < *column; j++) {
            //将所有后面的行向上移动一行，自动覆盖
            strcpy(twoDimension[i][j].data, twoDimension[i + 1][j].data);
        }
    }

    *total = *total - 1;
    printf("删除成功\n");

    loop:;

}
