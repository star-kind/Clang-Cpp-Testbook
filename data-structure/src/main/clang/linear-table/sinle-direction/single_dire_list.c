#include "../../../header/exports_declaration.h"

#define N 5

/**
 * 单向链表
 */
typedef struct SINGLE_LINK {
    int elem;
    struct SINGLE_LINK *next;
} SINGLE_LINK;

SINGLE_LINK *create_link_function(int number_array[]) {
    SINGLE_LINK *head, *node, *end;
    head = (SINGLE_LINK *) malloc(sizeof(SINGLE_LINK));
    end = head;

    for (int i = 0; i < N; i++) {
        node = (SINGLE_LINK *) malloc(sizeof(SINGLE_LINK));
        node->elem = number_array[i];
        end->next = node;
        end = node;
    }
    end->next = NULL;

    //remove the first address::node
    head = head->next;
    return head;
}

SINGLE_LINK *insert_link_function(SINGLE_LINK *list) {
    SINGLE_LINK *s = (SINGLE_LINK *) malloc(sizeof(SINGLE_LINK));
    SINGLE_LINK *p = list;//赋予相同地址值,使之共同指向同一块内存空间
    int j = 0;
    int i, e;

    printf("enter postion you want to insert:\n");
    scanf("%d", &i);

    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }

    if (!(p != NULL) || j > i - 1) {
        printf("insert postion was error place:\n");
        exit(0);
    }

    printf("enter insert value:\n");
    scanf("%d", &e);

    s->elem = e;
    s->next = p->next;
    p->next = s;

    return list;
}

/**
 * mark deleted object start from zero
 * @param list
 * @return
 */
SINGLE_LINK *delete_link_function(SINGLE_LINK *list) {
    SINGLE_LINK *temp = list;
    int n;

    printf("enter postion you want to delete(start from zero):\n");
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++) {
        temp = temp->next;
    }

    SINGLE_LINK *del = temp->next;
    temp->next = temp->next->next;
    free(del);
}

void ergodic_printf(SINGLE_LINK *list) {
    while (list->next != NULL) {
        printf("%d\t", list->elem);
        list = list->next;
    }
    printf("\tlast elemment:%d\t", list->elem);
    printf("\n");
}

void _single_dire_list() {
    SINGLE_LINK *link;
    int num_array[N] = {1, 2, 3, 4, 5};

    link = create_link_function(num_array);
    ergodic_printf(link);

    link = insert_link_function(link);
    ergodic_printf(link);

    delete_link_function(link);
    ergodic_printf(link);
}