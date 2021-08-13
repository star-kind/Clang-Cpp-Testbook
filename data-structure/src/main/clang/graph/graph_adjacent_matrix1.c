#include "./../../header/exports_declaration.h"

#define maxLength 10

typedef struct GRAPH_STRUCTURE {
    /**
     * two dimensional array,stores the boolean data between two vertex point that proves whether not connects.0 means disconnect,1 means connected.
     */
    int relation_matrix[maxLength][maxLength];
} *graph_pointer, graph;

int getElementIndex(int *arr_name, int num) {
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

void product_graph_2(int vertex_amount, int edge_amount, graph *g, int *vertex_point_arr) {
    int i, j, k, m;
    int m_index, k_index;

    //initializes the matrix: two dimension array
    for (i = 0; i < vertex_amount; i++) {
        for (j = 0; j < vertex_amount; j++) {
            g->relation_matrix[i][j] = 0;
        }
    }

    //decide which two vertex has connected
    for (i = 0; i < edge_amount; i++) {
        printf("please input the two vertex that interconnection at No-%d line(Vi,Vj): ", i + 1);
        scanf("%d%d", &k, &m);
        k_index = getElementIndex(vertex_point_arr, k);
        m_index = getElementIndex(vertex_point_arr, m);
        //if they already connect,set the relationship become 1
        g->relation_matrix[k_index][m_index] = g->relation_matrix[m_index][k_index] = 1;
    }
}

void matrix_painting(graph_pointer gpt, int vertex_amount) {
    printf("drawing a matrix graph to explains that relationship of vertex:\n\r");

    for (int i = 0; i < vertex_amount; i++) {
        for (int j = 0; j < vertex_amount; j++) {
            printf("%d ", gpt->relation_matrix[i][j]);
        }
        printf("\n");
    }
}

/**
 * adjacent matrix of graph
 */
void matrix_operate_exp() {
    int vertex_amount = 6;
    int edge_amount = 9;
    int vertex_point_arr[] = {11, 22, 33, 44, 55, 66};

    graph g;
    product_graph_2(vertex_amount, edge_amount, &g, vertex_point_arr);

    matrix_painting(&g, vertex_amount);
}