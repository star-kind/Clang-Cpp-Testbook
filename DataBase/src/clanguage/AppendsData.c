#include "./../head/header.h"
#include "./../head/Methods.h"

//追加记录
void appendDB(char idents[], int reverseIdsQuanity, char reverseIDs[], int idQuanity, int *columns, int *totality) {
    int i, j, k = 1, sum = 0;

    memset(idents, '\0', sizeof(idents));

    if (*totality > 1) {//自动生成编号
        j = strlen(twoDimension[*totality - 1][0].data);

        //将数据库最后一条记录的编号值转换成整型
        for (i = j - 1; i >= 0; i--) {
            sum = sum + (twoDimension[*totality - 1][0].data[i]);

            k *= 10;
        }
        //追加记录的编号为其最后一条记录的编号加一
        sum++;
        switchMethod(idents, sum);
    } else {
        //将其编号的值转换成对应字符串
        switchMethod(idents, 1);
    }
    reverseIdsQuanity = 0;
    memset(reverseIDs, '\0', sizeof(reverseIDs));

    idQuanity = strlen(idents);

    for (i = idQuanity - 1; i >= 0; i--) {
        //因为转换的字符串为改编号的逆序，所以将其反向存储
        reverseIDs[reverseIdsQuanity++] = idents[i];
    }

    reverseIDs[reverseIdsQuanity] = '\0';
    strcpy(twoDimension[*totality][0].data, reverseIDs);

    //分别追加各条记录的值
    for (i = 1; i < *columns; i++) {
        printf(" 请输入 %s", twoDimension[0][i].data);
        scanf("%s", twoDimension[*totality][i].data);
    }

    *totality = *totality + 1;
    printf("该数据添加成功\n");
}
