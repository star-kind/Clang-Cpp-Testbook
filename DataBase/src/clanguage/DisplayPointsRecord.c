#include "./../head/header.h"

void displayPointsRecord(int pointsRecord, int *col, int *totality) {
    int i, j, k, maxVal = -1, valLength;
    //记录每个字段值中的最大宽度，以便调整输出的格式
    for (i = 0; i < *totality; i++) {
        for (j = 0; j < *col; j++) {
            valLength = strlen(twoDimension[i][j].data);
            if (valLength > maxVal) {
                maxVal = valLength;
            }
        }
    }

    for (k = 0; k < maxVal * (*col); k++) {
        printf("*");
    }
    printf("\n");

    //输出twoDimension的第一行 ，也就是数据库的类型行
    for (i = 0; i < *col; i++) {
        printf("%s", twoDimension[0][i].data);
        for (k = strlen(twoDimension[0][i].data); k < maxVal; k++) {
            printf(" ");
        }
    }

    printf("\n");

    //格式化输出go所指的字段值
    for (j = 0; j < *col; j++) {
        printf("%s", twoDimension[pointsRecord][j].data);
        for (k = strlen(twoDimension[pointsRecord][j].data); k < maxVal; k++) {
            printf(" ");
        }
    }

    for (k = 0; k < maxVal * (*col); k++) {
        printf("*");
    }
    printf("\n");
}
