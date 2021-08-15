#include "./../../header/exports_declaration.h"

#define maxInteger 50

typedef struct GRAPH_STRUCTURE {
    /**
     * adjacent matrix that is call edge-line array too.
     */
    int edge_line[maxInteger][maxInteger];
} graph_struct;

/**
 * records each vertex has been whether ergodic or not
 */
int visited[maxInteger];

int get_index_of_ele(int *arr_name, int num) {
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

int get_elements_quantity(int *arr_var_name) {
    int j = 0, i = 0;

    while (*(arr_var_name + j++)) {
        i++;
    }

    return i;
}

void generates_graph(graph_struct *graph, int vertex_amount, int edge_line_quantity, int *vertex_arr) {
    int i, j, v, v2;
    int v_index, v2_index;

    // initialization of adjacent matrix
    for (i = 0; i < vertex_amount; i++) {
        for (j = 0; j < vertex_amount; j++) {
            graph->edge_line[i][j];
        }
    }

    //inputs two vertex that connects No-%d edge line
    for (i = 0; i < edge_line_quantity; i++) {
        printf("please inputs two vertex(Vi,Vj) that connects No-%d edge line: ", i + 1);
        scanf("%d%d", &v, &v2);

        //get index with element that in array
        v_index = get_index_of_ele(vertex_arr, v);
        v2_index = get_index_of_ele(vertex_arr, v2);

        //set had connects position become 1 that in adjacent matrix
        graph->edge_line[v_index][v2_index] = graph->edge_line[v2_index][v_index] = 1;
    }
}

void ergodic_graph_relation(int vertex_quantity, graph_struct *graph) {
    int i, j;
    printf("\nshow the adjacent matrix of graph:\n\r");
    for (i = 0; i < vertex_quantity; i++) {
        for (j = 0; j < vertex_quantity; j++) {
            printf("%d  ", graph->edge_line[i][j]);
        }
        printf("\n\r");
    }
}

void graph_adj_exam_exp() {
    graph_struct graph;

    int vertex_array[] = {101, 202, 303, 404, 505};
    int vertex_quantity = get_elements_quantity(vertex_array);

    int edge_line_num = 6;

    generates_graph(&graph, vertex_quantity, edge_line_num, vertex_array);
    ergodic_graph_relation(vertex_quantity, &graph);
}

