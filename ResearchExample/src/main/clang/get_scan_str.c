#include "../header/declaration.h"

char *input_string() {
    char *str;
    char *prev_str;

    char *suspend = "quit";
    // 申请40个char长度的空间
    str = (char *) malloc(sizeof(char) * 40);
    prev_str = (char *) malloc(sizeof(char) * 40);

    printf("input input_string : ");

    while (1) {
        scanf("%s", str);

        int res_compare = strcmp(str, suspend);
        if (res_compare == 0) {//如若输入 suspend ,则中止
            printf("中止符出现!\n");
            break;
        } else {
            printf("string : %s \n", str);
        }
        prev_str = str;

        // TODO C语言:通过指针对字符串进行拼接
    }

    return str;
}

void display_output() {
    char *output_str = NULL;

    output_str = input_string();

    printf("output_str: %s\n", output_str);
}