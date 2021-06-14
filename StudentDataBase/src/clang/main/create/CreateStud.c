#include "../../../declare/Declare.h"

struct student *createStudent(int num) {
    struct student *p;
    p = malloc(sizeof(struct student));
    printf("请输入姓名:");
    scanf("%s", p->name);

    p->num = num;

    printf("请输入性别:");
    scanf("%s", p->gender);

    printf("请输入年龄:");
    scanf("%d", &p->age);

    return p;
}
