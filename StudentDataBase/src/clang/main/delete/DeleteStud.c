#include "../../../declare/Declare.h"

void delStudent(struct student *head) {
    struct student *p1 = NULL, *p2 = NULL;

    int num;

    p2 = head->next;

    if (p2 == NULL) {
        printf("数据库中无此学生.");
        return;
    }

    printf("请输入要删除的学生的号码:");
    scanf("%d", &num);

    while (p2) {
        if (((head->next)->num) == num) {//删除头数据
            p1 = head->next;
            head->next = p1->next;
            free(p1);
            printf("学生%d删除成功", num);
            return;
        }

        if ((p2->next != NULL) && ((p2->next)->next != NULL) && ((p2->next)->num == num)) {
            p1 = p2->next;
            p2->next = p1->next;
            free(p1);
            printf("学生%d删除成功\n", num);
            return;
        }

        if ((p2->next != NULL && (p2->next)->next == NULL && (p2->next)->num == num)) {//删除尾数据
            p1 = p2->next;
            p2->next = NULL;
            free(p1);
            printf("学生%d删除成功\n", num);
            return;
        }
//        else {
//            printf("无此学生\n");
//            return;
//        }

        p2 = p2->next;
    }
}
