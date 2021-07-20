#include "../../../header/exports_declaration.h"

#define MAX_SIZE 10

typedef struct SEQUENCE_TBL {
    int data[MAX_SIZE];
    int length;
} seq_tbl;

void initialize_s_t(seq_tbl *list) {
    list->length = 0;
}

int create_new_seq(int array[], int list_len, seq_tbl *list) {
    if (list_len > MAX_SIZE) {
        printf("there isn't no enough space to create a sequence table,readjustment please.\n");
        return 0;//0==false
    }

    //assign value
    for (int i = 0; i < list_len; i++) {
        list->data[i] = array[i];
    }

    //get list_len to assign length of seq list
    list->length = list_len;

    return 1;
}

void sequence_print(seq_tbl *list) {
    for (int i = 0; i < list->length; ++i) {
        printf("%3d", list->data[i]);
    }
    printf("\n");
}

// elements of la and lc,they are all in increasing order,lc will be,too.
void merge_seq_list(seq_tbl *la, seq_tbl *lb, seq_tbl *lc) {
    int i, j, k;
    i = j = k = 0;

    lc->length = la->length + lb->length;

    while (i < la->length && j < lb->length) {//when la and lb all are not empty
        //take out the smaller number in turn and put them in the list lc
        if (la->data[i] <= lb->data[j]) {
            lc->data[k++] = la->data[i++];
        } else {
            lc->data[k++] = lb->data[j++];
        }
    }

    //when la have a surplus,take surplus of la that put into tail of lc
    while (i < la->length) {
        lc->data[k++] = la->data[i++];
    }

    //when lb have a surplus,take surplus of lb that put into tail of lc
    while (j < lb->length) {
        lc->data[k++] = lb->data[j++];
    }
}

/**
 * merge two sequence table(la and lb) into one new sequence table
 * <br>
 * <ul>
 * <li></li>
 * <li>first,create a sequence table:lc, size of lc equals the sum of the size of la and lb</li>
 * <li>next,take number from the seq tbl la and the seq tbl lb,respectively.compare the size of the two,put the smaller into the lc,it going on,until one of them has no number.</li>
 * <li>finish put into lc that the rest of the number in turn.</li>
 * </ul>
 */
void _merge_seq_exports() {
    int array_a[5] = {12, 13, 14, 15, 16};
    int array_b[4] = {22, 23, 24, 25};
    seq_tbl la, lb, lc;

    initialize_s_t(&la);
    initialize_s_t(&lb);
    initialize_s_t(&lc);

    create_new_seq(array_a, 5, &la);
    create_new_seq(array_b, 4, &lb);

    sequence_print(&la);
    sequence_print(&lb);

    merge_seq_list(&la, &lb, &lc);
    sequence_print(&lc);
}
