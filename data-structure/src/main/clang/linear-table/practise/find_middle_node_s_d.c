#include "../../../header/exports_declaration.h"

typedef struct LINKED_LIST {
    char data;
    struct LINKED_LIST *next;
} linked_list;

linked_list *initialization_linked(linked_list *list) {
    list = (linked_list *) malloc(sizeof(linked_list));
    return list;
}

linked_list *tail_with_generate(linked_list *list, char chs_array[], int range) {
    linked_list *p, *tmp;
    p = list;

    for (int i = 0; i < range; i++) {
        tmp = (linked_list *) malloc(sizeof(linked_list));
        tmp->data = chs_array[i];
        tmp->next = NULL;

        //insert the new node after the tail node
        p->next = tmp;
        //p points to the new tail node
        p = tmp;
    }
    return list;
}

void ergodic_printing(linked_list *list) {
    linked_list *pt;
    pt = list->next;

    while (pt) {//be equals to: pt != NULL
        printf("%3c", pt->data);
        //keep moving toward back
        pt = pt->next;
    }
    printf("\n");
}

linked_list *find_middle_node(linked_list *list) {
    linked_list *fp, *sp;
    //fp is faster pointer,it start pointing node list
    fp = list;
    //sp is slower pointer,it start pointing node list
    sp = list;

    while (fp != NULL && fp->next != NULL) {
        // fp: two step at a time
        fp = fp->next->next;
        // sp: one step at a time
        sp = sp->next;
    }
    // at last,slower pointer stay in middle node place
    return sp;
}

/**
 * find middle node in the single link list
 */
void find_middle_export() {
    linked_list *list, *mid;
    char even_chs_arr[] = {'s', 'd', 'b', 'n', 'r', 'E', 'M', 'v'};
    char odd_chs_arr[] = {'u', 'g', 'p', 'W', 'M', 'q', 'C'};

    list = initialization_linked(list);

    list = tail_with_generate(list, even_chs_arr, 8);
    ergodic_printing(list);

    mid = find_middle_node(list);
    char middle_ch = mid->data;
    printf("middle character:  %c\n", middle_ch);
}

