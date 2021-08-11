#include "./../../header/exports_declaration.h"

#define maxLength 20

typedef struct GRAPH_STRUCTURE {
    /**
     * array of VERTEX value
     */
//    int vertex_val[maxLength];

    /**
     * two dimensional array,stores the boolean data between two vertex point that proves whether not connects.0 means disconnect,1 means connected.
     */
    int relation_matrix[maxLength][maxLength];

    /**
     * amount of edge line in graph
     */
//    int edge;

    /**
     * amount of vertex point in graph
     */
//    int vertex_point;
} *graph_pointer;

int get_index_by_element(int *arr_name, int num) {
//    int num;
    int i = 0, j = -1;
    int k = -1;

//    printf("please input the element:  ");
//    scanf("%d", &num);

    while (*(arr_name + i++)) {
        if (*(arr_name + j++) == num) {
            k = j;
            break;
        }
    }

    return k;
}

graph_pointer product_graph(int vertex_amount, int edge_amount, graph_pointer gpt, int *vertex_point_arr) {
    int i, j, k, m, n;
    int m_index, k_index;

    //initializes the matrix: two dimension array
    for (i = 0; i < vertex_amount; i++) {
        for (j = 0; j < vertex_amount; j++) {
            gpt->relation_matrix[i][j] = 0;
        }
    }

    //decide which two vertex has connected
    for (i = 0; i < edge_amount; i++) {
        printf("please input the two vertex that interconnection at No%d line(Vi,Vj): ", i + 1);
        scanf("%d%d", &k, &m);
        k_index = get_index_by_element(vertex_point_arr, k);
        m_index = get_index_by_element(vertex_point_arr, m);
        //if they already connect,set the relationship become 1
        gpt->relation_matrix[k_index][m_index] = gpt->relation_matrix[m_index][k_index] = 1;
    }

    return gpt;
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

void matrix_operate_exp() {
    int vertex_amount = 6;
    int edge_amount = 8;
    int vertex_point_arr[] = {22, 44, 77, 88, 99, 101};
    graph_pointer gpt;
    gpt = (graph_pointer) malloc(sizeof(graph_pointer));

    gpt = product_graph(vertex_amount, edge_amount, gpt, vertex_point_arr);
    matrix_painting(gpt, vertex_amount);

}