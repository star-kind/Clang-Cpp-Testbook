#include "../../../header/exports_declaration.h"

typedef struct SINGLE_LINK {
    int data;
    struct SINGLE_LINK *next;
} single_link;

single_link *single_initialization(single_link *list) {
    list = (single_link *) malloc(sizeof(single_link));
    return list;
}

single_link *rear_insert_created(single_link *list, int arr_num[], int range) {
    single_link *p, *tmp;
    p = list;

    for (int i = 0; i < range; i++) {
        tmp = (single_link *) malloc(sizeof(single_link));
        tmp->data = arr_num[i];
        tmp->next = NULL;

        p->next = tmp;
        p = tmp;
    }
    return list;
}

void circulates_show(single_link *list) {
    single_link *p;

    p = list->next;
    while (p) {// while p != 0
        printf("%d   ", p->data);
        p = p->next;
    }
    printf("\n");
}

single_link *delete_duplicates(single_link *list) {
    single_link *p, *q, *temp;
    p = list;
    q = p->next;
    temp = NULL;

    while (q) {// while q!=0
        if (p->data == q->data) {
            temp = q;
            q = q->next;
            p->next = q;
            free(temp);
        } else {
            p = q;
            q = q->next;
        }
    }
    return list;
}

/**
* remove all the duplicate elements from the single-list so that each elements appears only once<br>
 * the single-list's order must be decreasing or increasing
*/
void delete_duplicate_export() {
    single_link *list;
    int arr_num[] = {1, 1, 16, 16, 16, 30, 30, 36, 36, 49, 49, 112, 112};
    int arr_num2[] = {111, 111, 96, 96, 86, 86, 80, 80, 80, 49, 49, 12, 12};

    list = single_initialization(list);

    list = rear_insert_created(list, arr_num2, 13);
    circulates_show(list);

    list = delete_duplicates(list);
    circulates_show(list);
}