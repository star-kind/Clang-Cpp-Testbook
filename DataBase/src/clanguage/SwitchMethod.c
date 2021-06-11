//#include "./../head/header.h"

void switchMethod(char orderArr[], int num) {
    int l = 0;
    int n = num;
    //把数字转化为对应的字符串并存放至编号数组内
    while (1) {
        if (n == 0) {
            break;
        }

        n = num % 10;
        orderArr[l] = n + 48;
        l++;
        n = n / 10;
    }
}
