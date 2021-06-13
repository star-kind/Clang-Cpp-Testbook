#include "../../heads/functions.h"
#include "../../heads/link_man.h"

Statis sta;

void menu() {
    printf("**********************\n");
    printf("*******1.添加联系人     ******\n");
    printf("*******2.删除指定联系人  ******\n");
    printf("*******3.查找指定联系人  ******\n");
    printf("*******4.修改指定联系人  ******\n");
    printf("*******5.显示所有联系人  ******\n");
    printf("*******6.清空所有联系人  ******\n");
    printf("*******7.以名字排序全部联系人***\n");
    printf("*******  按 0 退出  *********\n");
    printf("**********************\n");
}

void running() {
    int i = 0;
    do {
        menu();

        printf("请输入你要进行的选项=\n");
        scanf("%d", &i);

        switch (i) {
            case 1:
                Add_link_man(&sta);
                break;

            case 2:
                Dele_link_man(&sta);
                break;

            case 3:
                Find_link_man(&sta);
                break;

            case 4:
                Revise_link_man(&sta);
                break;

            case 5:
                Display_link_man(&sta);
                break;

            case 6:
                Empty_link_man(&sta);
                break;

            case 7:
                sort_link_man(&sta);
                break;

            case 0:
                exit(1);
                break;

            default:
                printf("输入选项错误");
                break;

        }
    } while (i);
}

/**
 *
 * @return
 */
void exports() {
    init_link_man(&sta);
    running();
    system("pause");
}
