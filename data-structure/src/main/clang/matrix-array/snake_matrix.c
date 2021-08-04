#include "./../../header/exports_declaration.h"

typedef struct {
    int x;
    int y;
} position_obj;

/**
 * map:map matrix
 */
int map[30][30];
position_obj current_pos, next_pos;

/**
 * direction array,includes four direction:top,bottom,left,right<br>
 * <ol>
 * <li>right:(0,1)</li>
 * <li>bottom:(1,0)</li>
 * <li>left:(0,-1)</li>
 * <li>top:(-1,0)</li>
 * </ol>
 */
position_obj dire_arr[4] = {0, 1, 1, 0, 0, -1, -1, 0};

void initial(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; ++j) {
            map[i][j] = 0;// the matrix-array initializes to zero
        }
    }

    //let the -1 build on the top and bottom of matrix
    for (int m = 1; m <= n + 1; m++) {
        map[0][m] = map[n + 1][m] = -1;
    }

    //let the -1 build on the right and left of matrix
    for (int k = 1; k <= n + 1; k++) {
        map[k][0] = map[k][n + 1] = -1;
    }
}

void print_machine(int start_index, int end_index) {
    for (int i = start_index; i <= end_index; i++) {
        printf("%d", map[i][start_index]);
        for (int j = start_index + 1; j <= end_index; j++) {
            printf("\t%d", map[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void solves(int n) {
    current_pos.x = 1;//top left corner
    current_pos.y = 1;

    int direction_index = 0;
    int num = 1;

    map[1][1] = 1;

    while (num < n * n) {
        next_pos.x = current_pos.x + dire_arr[direction_index].x;
        next_pos.y = current_pos.y + dire_arr[direction_index].y;

        if (map[next_pos.x][next_pos.y] == 0) {//determines next position whether or exists zero
            map[next_pos.x][next_pos.y] = ++num;//catch zero,number add one
            current_pos = next_pos;//keep moves toward front base on current position
        } else {
            //switch a next direction,keep moving order by right->bottom->left->top
            direction_index = (direction_index + 1) % 4;
        }
    }
}

/**
* set n=3<br>
* example:<br>
* 1 2 3<br>
* 8 9 4<br>
* 7 6 5<br>
*/
void snake_operation() {
    int n;
    printf("please enter the integer number that required being greater than 1 and less than 20:\n\r");
    scanf("%d", &n);

    while (n < 1 || n > 20) {
        printf("please enter the integer number that required being greater than 1 and less than 20:\n\r");
        scanf("%d", &n);
    }

    initial(n);
    print_machine(0, n + 1);
    solves(n);
    print_machine(1, n);
}

void snake_matrix_export() {
    snake_operation();
}