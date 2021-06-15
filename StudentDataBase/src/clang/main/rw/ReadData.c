#include "../../../declare/Declare.h"

void readData(struct student *head) {
    //从文件中读取数据至有序链表
    FILE *fp;
    struct student *p = NULL, *q = NULL;
    p = head;

    fp = fopen(path, "r");
    if (fp==NULL)
    {
        fp=fopen(path,"a+");
    }

    q = freshData();
    while (fread(q, sizeof(struct student), 1, fp) == 1) {
        p->next = q;
        p = p->next;
        q = freshData();

    }
    fclose(fp);
}
