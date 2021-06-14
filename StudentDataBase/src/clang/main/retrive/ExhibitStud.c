#include "../../../declare/Declare.h"

/**
 *
 * @param head
 */
void exhibitStudent(struct student *head) {
    struct student *p1;
    p1 = head->next;
    if (p1 == NULL) {
        printf("没有任何学生的信息\n");
        return;
    }


    printf("***********学生信息列表***********\n");
    printf("姓名\t学号\t性别\t年龄\t\n");
    printf("*********************\n");

    do {
        printf("%s \t %d \t %s \t %d \n", p1->name, p1->num, p1->gender, p1->age);
        p1 = p1->next;
    } while (p1);

    printf("*********************\n");
}
