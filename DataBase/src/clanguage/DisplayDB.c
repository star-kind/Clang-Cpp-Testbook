#include "./../head/header.h"

//浏览写进数组中的数据
void displayDB(char memory[], int *column, int *total) {
    int i, j, k, valLength, maxVal = -1;
    memset(memory, '\0', sizeof(memory));

    //记录每个字段值中最大的长度,以便调整输出的格式
    for (j = 0; j < *column; j++) {
        valLength = strlen(twoDimension[i][j].data);
        if (valLength > maxVal) {
            maxVal = valLength;
        }
    }

    //输出twoDimension中所有的字段内容
    for (i = 0; i < *total; i++) {
        for (k = 0; k < maxVal * (*column); k++) {
            //输出*作为顶格
            printf("*");
        }
        printf("\n");

        for (j = 0; j < *column; j++) {
            printf("%s", twoDimension[i][j].data);
            //对齐操作
            for (k = strlen(twoDimension[i][j].data); k < maxVal; k++) {
                printf(" ");
            }
        }
    }

    for (k = 0; k < maxVal * (*column); k++) {
        printf("*");

    }
    printf("\n");
}
