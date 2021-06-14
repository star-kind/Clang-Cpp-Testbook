#include "../../../declare/Declare.h"

/**
 *
 * @param head
 */
void checkOrder(struct student *head) {
    int order;
    printf("请输入命令");
    scanf("%d", &order);
    if (order == 0) {
        printf("您业已退出系统");
        //表示进程正常退出，返回1
        exit(1);
    }

    if (order == 1) {
        printf("请开始添加学生数据");
        addStudent(head);
        return;
    }

    if (order == 2) {
        delStudent(head);
        return;
    }

    if (order == 3) {
        exhibitStudent(head);
        return;
    }

    if (order == 4) {
        updateStudent(head);
        return;
    }

    printf("您输入的命令有误，请重新输入\n");
}
