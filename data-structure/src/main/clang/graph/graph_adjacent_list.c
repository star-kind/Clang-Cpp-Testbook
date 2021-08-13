#include "./../../header/exports_declaration.h"

#define maxLen 20

typedef struct GRAPH_LINE {
    /**
     * value of vertex point that adjacent
     */
    int line_point;
    struct GRAPH_LINE *next;
} graph_line;

/**
 * aggregate of vertex point
 */
typedef struct GRAPH_POINT {
    /**
     * value of vertex point
     */
    int vertex_point;
//    struct graph_line *next;
    struct GRAPH_LINE *next;
} graph_point;

int get_ele_amount(int *arr_var_name) {
    int j = 0, i = 0;

    while (*(arr_var_name + j++)) {
        i++;
    }

    return i;
}

int getEleIndex(int *arr_name, int num) {
    int i = 0, j = 0;
    int k = -1;

    while (*(arr_name + i++)) {
        if (*(arr_name + j) == num) {
            k = j;
            break;
        }
        j++;
    }

    return k;
}

void create_adjacent_graph(graph_point *gPoint, int *vertex_val_arr, int line_num) {
    int i, k, r;
    int index = 0;
    int v, v1;
    int v_index, v1_index;
    graph_line *gLine;

    //get element amount of vertex value array
    int vertex_amount = get_ele_amount(vertex_val_arr);

    // set value to vertex of structure
    for (k = 0; k < vertex_amount; k++) {
        r = *(vertex_val_arr + index++);
        (gPoint + k)->vertex_point = r;
        (gPoint + k)->next = NULL;
    }

    for (i = 0; i < line_num; i++) {
        printf("please input two vertex point(Vi,Vj) they connects NO.(%d) line:", i + 1);
        scanf("%d%d", &v, &v1);

        // vertex v
        gLine = (graph_line *) malloc(sizeof(graph_line));
        //get index of v that it inside array
        v_index = getEleIndex(vertex_val_arr, v);
        gLine->next = gPoint[v_index].next;
        // put adjacent vertex that value into this node
        gLine->line_point = v1;
        //let vertex.pointer.next points to this node,that is header-insert method
        (gPoint + v_index)->next = gLine;

        //vertex v1,repeat previous steps,put another node into another vertex aggregate
        gLine = (graph_line *) malloc(sizeof(graph_line));
        v1_index = getEleIndex(vertex_val_arr, v1);

        gLine->next = (gPoint + v1_index)->next;
        gLine->line_point = v;
        (gPoint + v1_index)->next = gLine;
    }
}

void ergodic_graph_list(graph_point *graphPoint, int vertex_point_amount) {
    graph_line *pLine;

    for (int i = 0; i < vertex_point_amount; i++) {
        printf("the No--%d vertex value: %d", i + 1, (graphPoint + i)->vertex_point);
        //display adjacent vertex if it exists
        if ((graphPoint + i)->next != NULL) {
            printf("\n\rThe adjacent vertex with it:");
            pLine = (graphPoint + i)->next;

            while (pLine != NULL) {
                printf("%d  ", pLine->line_point);
                pLine = pLine->next;
            }
            printf("\n\r");
        } else {
            printf("\n\r");
        }
    }
}

/**
* adjacent linked list of graph
*/
void graph_table_exp() {
    graph_point *graphPoint1;
    graphPoint1 = (graph_point *) malloc(sizeof(graph_point) * maxLen);

    int lineNum = 7;
    int vertex_array[] = {10, 20, 30, 40, 50};
    int vertex_point_amount = get_ele_amount(vertex_array);

    create_adjacent_graph(graphPoint1, vertex_array, lineNum);
    ergodic_graph_list(graphPoint1, vertex_point_amount);

}