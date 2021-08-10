#include "./../../header/exports_declaration.h"

#define maxsize 100

typedef struct GRAPH_STRUCTURE {
    int vertex_point[maxsize];
    int matrix_line[maxsize][maxsize];

    /**
     * records for user inputs that vertex point quantity
     */
    int point_num;

    /**
     * quantity of edge that user input
     */
    int line_num;
} graph, *graph_pt;


void creates_graph(graph_pt gr) {
    int i, j, h, l;

    printf("please inputs quantity of VERTEX:\n\r");
    scanf("%d", &gr->point_num);

    printf("please inputs quantity of EDGE:\n\r");
    scanf("%d", &gr->line_num);

    for (i = 0; i < gr->point_num; i++) {
        printf("please enter the value that order is NO %d :\n\r", i + 1);
        scanf("%d", &gr->vertex_point[i]);
    }

    //initializes and set value to the matrix
    for (i = 0; i < gr->point_num; i++) {
        for (j = 0; j < gr->point_num; j++) {
            gr->matrix_line[i][j] = 0;
        }
    }

    for (i = 0; i < gr->line_num; i++) {
        printf("please input the two VERTEX point of order number %d edge that connected(Vi,Vj):\n\r", i + 1);
        scanf("%d%d", &h, &l);
        //change the value of position in matrix to 1
        gr->matrix_line[h][l] = gr->matrix_line[l][h] = 1;
    }

    printf("graph has generates done. the vertex point in graph as: \r\n");
    for (i = 0; i < gr->point_num; i++) {
        printf("%d ", gr->vertex_point[i]);
    }

    printf("\n\r");
    printf("they connection relationship is:\n\r");

    for (i = 0; i < gr->point_num; i++) {
        for (j = 0; j < gr->point_num; j++) {
            printf("%d ", gr->matrix_line[i][j]);
        }
        printf("\n\r");
    }
}

void matrix_graph_exp() {
//    graph gr1;

    graph_pt gpt;
    gpt = (graph_pt) malloc(sizeof(graph_pt));

    creates_graph(gpt);
//    creates_graph(&gr1);
}

