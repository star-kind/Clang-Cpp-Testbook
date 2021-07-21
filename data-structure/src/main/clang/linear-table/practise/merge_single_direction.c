#include "../../../header/exports_declaration.h"

typedef struct NODE {
    char data;
    struct NODE *next;
} s_d_node;

s_d_node *initialize_node(s_d_node *list) {
    list = (s_d_node *) malloc(sizeof(s_d_node));
    return list;
}

/**
 * linked list created by rear-insert method,it will include a header node
 * @param chs
 * @param chs_length
 * @param head
 * @return
 */
s_d_node *create_linked_list(char chs[], int chs_length, s_d_node *head) {
    s_d_node *p_new, *rear;
    rear = head;

    for (int i = 0; i < chs_length; i++) {
        p_new = (s_d_node *) malloc(sizeof(s_d_node));
        p_new->data = chs[i];

        //rear pointer points into new node
        rear->next = p_new;

        //rear pointer movement
        rear = p_new;
    }
    rear->next = NULL;
    return head;
}

void circulate_prints(s_d_node *node) {
    s_d_node *temp;
    temp = node->next;

    while (temp) {//temp != NULL
        printf("%3c", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

s_d_node * merge_link_list(s_d_node *list_a, s_d_node *list_b, s_d_node *list_c) {
    s_d_node *la, *lb, *lc;

    //la points to first element node of list_a
    la = list_a->next;

    //lb points to first element node of list_b
    lb = list_b->next;

    //list_c points to header node of list_a
    list_c = list_a;

    //lc points to rear of list_c
    lc = list_c;

    while (la != NULL && lb != NULL) {
        if (la->data < lb->data) {//connect the nodes that la points to
            lc->next = la;
            lc = la;
            //pointer movement
            la = la->next;
        } else {//connect the nodes that lb points to
            lc->next = lb;
            lc = lb;
            //pointer movement
            lb = lb->next;
        }
    }

    /*if la not empty yet, connects the rest node of la behind, it equals to: lc->next=la,
     *else,lc->next=lb
     * */
    lc->next = la ? la : lb;//be equals to:if(la){lc->next=la;}else{lc->next=lb;}

    return list_c;
}


/**
 * merge two single direction link list (list_a and list_b) into
 * one new single direction link list:list_c(list a/b/c they are all in increasing order).
 */
void merge_s_d_exports() {
    char char_arr_a[] = {'h', 'i', 'j', 'k', 'l', 'm'};
    char char_arr_b[] = {'U', 'V', 'W', 'X'};

    s_d_node *list_a, *list_b, *list_c;
    list_a = initialize_node(list_a);
    list_b = initialize_node(list_b);
    list_c = initialize_node(list_c);

    list_a = create_linked_list(char_arr_a, 6, list_a);
    list_b = create_linked_list(char_arr_b, 4, list_b);

//    circulate_prints(list_a);
//    circulate_prints(list_b);

    list_c = merge_link_list(list_a, list_b, list_c);
    circulate_prints(list_c);
}
