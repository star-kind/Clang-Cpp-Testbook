#include "../header/declaration.h"

#define MAXSIZE 20

/**
 * 顺序表
 */
typedef struct {
    int data[MAXSIZE];
    int length;
} sq_list;

void init_sequence(sq_list *seq) {
    seq->length = 0;
}

int create_sequence(sq_list *seq, int a[], int n) {
    if (n > MAXSIZE) {
        //空间不足，无法建立顺序表
        printf("there isn't enough space to create a sequence table\n");
        return 0;
    }

    for (int k = 0; k < n; k++) {
        seq->data[k] = a[k];
    }

    seq->length = n;

    return 1;
}

int is_empty(sq_list *seq) {
    if (seq->length == 0) {
        return 1;
    } else {
        return 0;
    }
}

int get_length(sq_list *seq) {
    return seq->length;
}

//遍历打印
void list_print(sq_list *seq) {
    for (int i = 0; i < seq->length; ++i) {
        printf("%4d", (seq->data[i]));
    }
    printf("\n");
}

//按值定位
int locate_by_value(sq_list *seq, int x) {
    for (int i = 0; i < seq->length; ++i) {
        if (seq->data[i] == x) {
            return i + 1;
        }
        //找不到
        return 0;
    }
    return 1;
}

//按位查询
int get_by_bite(sq_list *seq, int x, int *ptr) {
    //如果找到目标,则通过指针参数ptr返回其值
    if (x < 1 || x > seq->length) {
        //出现错误，想查的位置是非法的
        printf("error appear! illegal location\n");
        return 0;
    } else {
        *ptr = seq->data[x];
        return 1;
    }
}

/**
 *
 * @param s
 * @param i 欲插入的位置
 * @param x 欲插入的值
 * @return
 */
int insert(sq_list *s, int i, int x) {
    if (s->length > MAXSIZE) {
        //上溢错误
        printf("up overflow error\n");
        return 0;
    }

    if (i < 1 || i > s->length) {
        //插入的位置不对
        printf("the insert location is not in the right place\n");
        return 0;
    }

    for (int k = s->length; k > i; k--) {
        s->data[k] = s->data[k - 1];//从位置i开始，逐个往后移动
    }

    s->data[i] = x;
    s->length++;
    return 1;
}

int delete(sq_list *s, int i, int *ptr) {
    if (s->length == 0) {
        //发生下溢错误，即将要访问顺序表之前的地址
        printf("fatal:underflow,the address before the order table is about to be accessed\n");
        return 0;
    }

    if (i > s->length || i < 1) {
        printf("the delete place isn't not right\n");
        return 0;
    }

    //把要删除的data返回
    *ptr = s->data[i - 1];

    for (int j = i; j < s->length; j++) {
        //从i位置开始至末尾，成员逐个往前移动一位
        s->data[j - 1] = s->data[j];
    }

    s->length--;
    return 1;
}

int modify(sq_list *s, int i, int x) {
    if (i > s->length || i < 1) {
        //修改的位置不正确
        printf("the modify place isn't right\n");
        return 0;
    }

    s->data[i] = x;
    return 1;
}

/**
 * 顺序表
 */
void sequence_table_exports() {
    int a[5] = {10, 22, 23, 74, 105};
    int i, x;
    sq_list list;

    init_sequence(&list);

    if (is_empty(&list)) {
        printf("initialization successful\n");
    }

    //给表赋值数组a,创建顺序表并打印
    create_sequence(&list, a, 5);
    list_print(&list);

    //在第三位插入一个值100
    insert(&list, 3, 100);
    list_print(&list);

    if (modify(&list, 3, 50) == 1) {
        //把第三位的值改为50
        printf("modify operation has been success\n");
        list_print(&list);
    }

    //删除第四位的值
    if (delete(&list, 4, &x) == 1) {
        printf("delete operation has been success,deleted value is: %d \n", x);
        list_print(&list);
    }

}