#include "./../../../header/exports_declaration.h"

#define maxLen 100
#define STRING_LEN 100

typedef struct SEQ_STACK_STRUCT {
    char *top;
    char *base;
} seq_stack;

void initializes_seq_stack_struct(seq_stack *seqStack) {
    //first step, allocates memory to pointer top
    seqStack->top = (char *) malloc(sizeof(char) * maxLen);

    //give address of pointer top to the pointer base
    seqStack->base = seqStack->top;
}

void push_into(seq_stack *seqStack, char param) {
    if (seqStack->top - seqStack->base == maxLen) {
        printf("seq_stack had ready full up\n");
        return;
    }

    *seqStack->top = param;
    seqStack->top++;
}

char pop_seq(seq_stack *seqStack) {
    char ch;
    if (seqStack->top == seqStack->base) {
        printf("Seq Stack was empty\n");
        exit(0);
    }

    ch = *seqStack->top;
    seqStack->top--;
    return ch;
}

//TODO test and debug input overstep string
char *get_enter_string(char *res) {
    char str[STRING_LEN];

    printf("please input a string:  ");
    scanf("%s", str);

    if (str[STRING_LEN + 1]) {
        printf("overstep string length limit\n");
        exit(0);
    }

    res = str;
    return res;
}

int determine_major() {
    char ch;
    seq_stack seqStack;
    int string_length, half_length, half_temp_length, second_half;
    int k = 0;
    char *ch_arr;

    //get a string(actually return a char array name pointer)
    ch_arr = get_enter_string(ch_arr);

    //get length of string
    string_length = strlen(ch_arr);
    half_temp_length = half_length = string_length / 2;

    //initialization
    initializes_seq_stack_struct(&seqStack);

    //take first half of the string character push into the stack in proper order
    while (half_temp_length--) {
        push_into(&seqStack, ch_arr[k++]);
    }

    if (string_length % 2 == 1) {//if string length is odd number,skip center point
        second_half = half_length + 1;
    } else {
        second_half = half_length;//string length is even number
    }

    while (seqStack.top != seqStack.base) {//if stack not empty
        ch = pop_seq(&seqStack);
        if (ch != ch_arr[second_half]) {//compare whether elements they are same
            printf("this string isn't palindrome\n");
            return false;
        } else {
            second_half++;
        }
    }
    return true;
}

void palindrome_exports() {
    int sign = determine_major();
    printf("judge palindrome result:  %d\n", sign);
}