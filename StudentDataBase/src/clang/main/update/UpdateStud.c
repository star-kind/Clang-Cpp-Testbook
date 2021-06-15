#include "../../../declare/Declare.h"

void updateStudent(struct student *head) {
    struct student *p2 = NULL;
    int num;
    p2 = head->next;
    if (p2 == NULL) {
        printf("数据库中信息为空\n");
        return;
    }

    printf("请输入要更新数据的学生的学号:");
    scanf("%d", &num);

    while (p2) {
        if (p2->num == num) {
            printf("请输入新的姓名:");
            scanf("%s", p2->name);

            printf("请输入新的性别:");
            scanf("%s", p2->gender);

            printf("请输入新的年龄:");
            scanf("%d", &p2->age);

            printf("学生（学号：%d）的信息修改成功\n",num);
            return;
        }
        p2 = p2->next;
    }

    printf("无此学生\n");
}
