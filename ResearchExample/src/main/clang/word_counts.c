#include "../header/declaration.h"

#define TERMINATED '+'

//TODO 标准格式读取输入字符串,并出口它

/**
 * 统计字符数,单词数,行数
 */
void word_counts() {
    char ending_char = TERMINATED;

    //读入的字符
    char read_in_char;

    //读入的字符的前一个字符
    char prev_char;

    //字符数
    long quantity_chars = 0L;

    //行数
    int quantity_lines = 0;
    //单词数
    int quantity_words = 0;
    //不完整的行数
    int quantity_incomplete_lines = 0;

    //若读入字符在单词中,为真
    bool in_word = false;

    printf("enter text to be analyzed( %c to terminated):\n", ending_char);
    //用于识别完整的行
    prev_char = '\n';

    // read_in_char = getchar();
    // TODO 进口一个字符串
    //while循环遍历一个字符串,当其中某个字符符合某项条件时,方可跳出
    while (read_in_char != TERMINATED) {
        //统计字符
        quantity_chars++;

        if (read_in_char == '\n') {
            //统计行
            quantity_lines++;
        }

        if (!isspace(read_in_char) &&
            !in_word) {
            /* 开始一个新单词 */
            in_word = true;
            //统计单词
            quantity_words++;
        }

        if (isspace(read_in_char) &&
            in_word) {
            /* 打字至单词的末尾 */
            in_word = false;
        }

        //保存字符的值
        prev_char = read_in_char;
    }

    if (prev_char != '\n') {
        quantity_incomplete_lines = 1;
    }

    printf("quantity__chars:%ld,quantity_lines:%d,quantity_words:%d \n", quantity_chars, quantity_lines,
           quantity_words);

    printf("quantity_incomplete_lines:%d \n", quantity_incomplete_lines);

}