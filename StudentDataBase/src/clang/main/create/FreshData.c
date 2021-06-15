#include "../../../declare/Declare.h"

struct student *freshData() {
    struct student *p = NULL;
    p = (struct student *) malloc(sizeof(struct student));
    return p;
}
