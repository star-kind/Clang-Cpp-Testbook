#include "../../../header/exports_declaration.h"

typedef struct LINK_LIST {
    int data;
    struct LINK_LIST *next;
} linklist;

linklist *init_linked(linklist *list) {
    list = (linklist *) malloc(sizeof(linklist));
    return list;
}

linklist *generated_with_rear(linklist *list, int arr_num[], int range) {
    linklist *p, *t;
    p = list;

    for (int i = 0; i < range; i++) {
        t = (linklist *) malloc(sizeof(linklist));
        t->data = arr_num[i];
        t->next = NULL;

        p->next = t;
        p = t;
    }
    return list;
}

void prints_circulates(linklist *list) {
    linklist *pt;
    pt = list->next;

    while (pt) {// while pt != null(0)
        printf("%d  ", pt->data);
        pt = pt->next;
    }
    printf("\n");
}

void delete_dup_elements(linklist *list, int max_val) {
    linklist *p, *q;
    int x;
    int supplementary[max_val + 1];
    int *flag = supplementary;

    //initialization array
    for (int i = 0; i < max_val + 1; i++) {
        flag[i] = 0;
    }

    // p points to head node
    p = list;

    while (p->next) {// while p.next != null
        // abs(): return a absolute value according to the parameter
        x = abs(p->next->data);

        if (flag[x] == 0) {//if never appears
            flag[x] = 1;//marks appeared
            p = p->next;//pointer moving toward back
        } else {
            //q points to next node of p
            q = p->next;
            //deletes duplicate elements
            p->next = q->next;
            //release memory
            free(q);
        }
    }
}

int get_array_size(int array[]) {
    int n = 0, j = 0;

    while (array[n++]) {
        j++;
    }
    return j;
}

/**
 * get max value from the array
 * @param para_arr
 * @param arr_size
 * @return
 */
int get_max_value(int para_arr[], int arr_size) {
    int max = para_arr[0];

    for (int i = 1; i < arr_size; i++) {
        if (max < para_arr[i]) {
            max = para_arr[i];
        }
    }
    printf("the max value from array:  %d\n", max);
    return max;
}

/**
 * delete duplicate elements from single linked list,including the absolute value<br>
 * ensure that each elements appears only once<br>
 */
void del_dup_ele_export() {
    int max_num, arr_size;
    int arr_number[] = {5, -2, -5, 4, 2, -4, 10, -10, 15};
    linklist *link;

    arr_size = get_array_size(arr_number);

    link = init_linked(link);
    link = generated_with_rear(link, arr_number, arr_size);
    prints_circulates(link);

    max_num = get_max_value(arr_number, arr_size);

    delete_dup_elements(link, max_num);
    prints_circulates(link);
}