#include "./../head/header.h"

//fgetc(): file get char 的缩写，从指定的文件中读取一个字符
//memset():初始化内存,在一段内存块中填充某个给定的值

//打开数据库文件，并且向文件中的数据存入结构体二维数组之中
void openDB(char app[], int *column, int *len, char idents[], char reverseIdents[]) {
    FILE *fp;
    char ch;
    char member[110];
    int col = 0;

    memset(idents, '\0', sizeof(idents));
    memset(member, '\0', sizeof(member));
    memset(reverseIdents, '\0', sizeof(reverseIdents));

    fp = fopen(app, "r+");
    ch = fgetc(fp);

    while (ch != EOF) {
        if (ch == ' ') {
            strcpy(twoDimension[*len][*column].data, member);
            *column = *column - 1;
            memset(member, '\0', sizeof(member));
            col = 0;
        } else if (ch == '\n') {
            *len = *len + 1;
            //列的值恢复0
            *column = 0;
        } else {
            member[col] = ch;
            col++;
        }
        ch = fgetc(fp);

    }

    *len = *len + 1;
}


