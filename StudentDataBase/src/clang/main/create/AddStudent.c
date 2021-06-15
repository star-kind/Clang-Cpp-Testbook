#include "../../../declare/Declare.h"

void addStudent(struct student *head) {//排序插入
    struct student *p1 = NULL, *p2 = NULL;
    int num;
    printf("请输入学号:");

    p2 = head->next;
    scanf("%d", &num);

    if (p2 == NULL) {
        p1 = createStudent(num);
        p1->next = NULL;
        head->next = p1;
        printf("学生：%d 添加成功\n", num);
        return;
    }

    while (p2) {
        if (p2->num == num) {
            printf("该学号业已存在\n");
            return;
        }

        if (((head->next)->num) > num && p2 == head->next) {
            p1 = createStudent(num);
            p1->next = head->next;
            head->next = p1;
            printf("学生 %d 添加成功\n",num);
            return;
        }

        if ((p2->next != NULL) && (p2->num < num) && ((p2->next)->num) > num) {
            p1 = createStudent(num);
            p1->next = p2->next;
            p2->next = p1;
            printf("学生%d添加成功\n", num);
            return;
        }

        if (p2->next == NULL) {
            p1 = createStudent(num);
            p1->next = NULL;
            p2->next = p1;
            printf("学生 %d 添加成功\n", num);
            return;
        }

        p2 = p2->next;
    }
}
