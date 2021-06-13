#include <sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<bits/types/FILE.h>

int length = 1;

//fangwen
int interview = 0;

//visit
//定义标记数组,用于locate与cotinue命令
int mark[110] = {0};
int conti = 0;

//go
//存储当前所指向的记录
int pointsRecord;

char link[110];
char value[110];

//字段数组，zd1
char fields[110];

//lxl,lx为要查找字段的内容
char contentLine[110];

//dbms_node
//定义数据库
typedef struct dbType {
    char data[110];
    char type[110];
    struct dbType *next;
} dbTypeLinkList;//DbmsLinklist

//dbms_point
typedef struct dbPoint {
    char data[20];
} dbPoint;

//wj
//定义结构中新的二维数组，以便用来与文件交互
struct dbPoint twoDimension[200][10];

//men
//分别存储文件的每一行，再赋值给 twoDimension 数组
char fileLineVal[110];

//分别接收文件的每一个字符
char ch;

// len
// twoDimension 数组的行数，即数据库中记录的总数
int totality = 0;

//lie
int row = 0;

//com,记录列数
int col = 0;

//bianlen===orderQuantity, fanlen===reverseOrderQuantity
int i, j, orderQuantity, reverseOrderQuantity = 0;

char member[110];

//bian
//自动生成的编号转换为相对应的字符串
char autoOrder[100];

//fabian
//反向存储 autoOrder 数组
char reverseAutoOrder[100];

FILE *fp;
