#include "../../../header/exports_declaration.h"

typedef struct SINGLE_LINKED_LIST {
    char data;
    struct SINGLE_LINKED_LIST *next;
} sll;

sll *link_initialization(sll *list) {
    list = (sll *) malloc(sizeof(sll));
    return list;
}

sll *tail_inserts_generate(sll *list, char ch_arr[], int range) {
    sll *p, *t;
    p = list;

    for (int i = 0; i < range; i++) {
        t = (sll *) malloc(sizeof(sll));
        t->data = ch_arr[i];
        t->next = NULL;

        //insert the new node after the tail node
        p->next = t;

        //p points to the new tail node
        p = t;
    }
    return list;
}

void ergodic_display(sll *list) {
    sll *tp;
    tp = list->next;

    while (tp) {// be equals : tp != 0
        printf("%3c", tp->data);
        tp = tp->next;
    }
    printf("\n");
}

sll *find_from_bottom(sll *list) {
    int k;
    sll *fp, *sp;

    //fp is faster pointer,it start pointing header node
    fp = list->next;

    //sp is slower pointer,it start pointing header node
    sp = list->next;

    printf("please enter number k,its position from the bottom that you looking for:\n");
    scanf("%d", &k);

    while (fp->next) {// be equals : x!=NULL
        if (--k <= 0) {// slower pointer start move when k decay to zero
            sp = sp->next;
        }
        // fp as faster pointer, it walk first step k
        fp = fp->next;
    }

    if (k > 0) {
        return NULL;
    } else {
        return sp;
    }
}

/**
* required: find node NumTh from the bottom in single linked list.
 * hint:use faster pointer and slower pointer
*/
void find_from_bottom_export() {
    sll *list, *res;
    char arr_char[] = {'e', 'v', 'Q', 'K', 'g', 'p', 'j', 'i', 'C', 'z'};

    list = link_initialization(list);

    list = tail_inserts_generate(list, arr_char, 10);
    ergodic_display(list);

    res = find_from_bottom(list);
    char target_ch = res->data;
    printf("that's what you're looking for:  %c", target_ch);
}