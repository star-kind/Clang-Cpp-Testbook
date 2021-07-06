#include "../header/declaration.h"

// TODO 需求:输入多个字符串,中止后连接起来输出

char *input_string() {
    char *str;
    char *prev_str;

    char *suspend = "quit";
    // 申请40个char长度的空间
    str = (char *) malloc(sizeof(char) * 40);
    prev_str = (char *) malloc(sizeof(char) * 40);

    printf("input input_string: ");

    while (1) {
        scanf("%s", str);

        int res_compare = strcmp(str, suspend);
        if (res_compare == 0) {//如若输入 suspend ,则中止
            printf("中止符出现!\n");
            break;
        } else {
            printf("string: %s \n", str);
        }
        prev_str = str;

    }
    printf("previous string: %s \n", prev_str);

    return str;
}

void display_output() {
    char *output_str = NULL;

    output_str = input_string();

    printf("output_str: %s\n", output_str);
}