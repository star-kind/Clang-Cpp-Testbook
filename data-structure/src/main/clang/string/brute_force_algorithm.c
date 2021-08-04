#include "./../../header/exports_declaration.h"

typedef struct {
    char *ch;//the pointer that points to string
    int length;
} string_structure;

/**
 * find sub's location that first time appears after pos char in major string major<br>
 * sub:sub string(not empty), length of major string stored in structure, 0 <pos< major.length
 * @param major
 * @param sub
 * @param pos
 * @return
 */
int brute_force_core(string_structure major, string_structure sub, int pos) {
    int j = 0, sum = 0;
    int res = 0;

    while (pos < major.length && j < sub.length) {
        sum++;
        if (*(major.ch + pos) == *(sub.ch + j)) {
            pos++;
            j++;
        } else {
            // pos back to next character of start compares at previous time
            pos = pos - j + 2;
            // j back to the first character
            j = 1;
        }
    }

    printf("total compares amount:  %d\r\n", sum);

    if (j >= sub.length) {//if compares successfully
        res = pos - sub.length;
    }

    return res;
}

void brute_force_operation() {
    char major_arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
    char sub_arr[] = {'f', 'g', 'h'};
    int pos = 0;

    string_structure major_str;
    string_structure sub_str;

    major_str.ch = major_arr;
    major_str.length = 12;

    sub_str.ch = sub_arr;
    sub_str.length = 3;

    int res = brute_force_core(major_str, sub_str, pos);
    printf("the sub string position of first time appeared at major string is(index start from zero):  %d\n\r", res);
}

void brute_force_export() {
    brute_force_operation();
}