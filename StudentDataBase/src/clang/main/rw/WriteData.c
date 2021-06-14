#include "../../../declare/Declare.h"

void writeData(struct student *head) {
    //把数据写入文件
    struct student *p = NULL;
    FILE *fp;
    fp = fopen(path, "w");
    p = head->next;
    while (p) {
        fwrite(p, sizeof(struct student), 1, fp);
        p = p->next;
    }

    fclose(fp);
}
