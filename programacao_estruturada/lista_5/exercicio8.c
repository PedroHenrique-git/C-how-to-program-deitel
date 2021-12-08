#include<stdio.h>
#define ROW 8
#define COLUMN 8

void printBoard(int **);
void initializeMatrix(int **);
int moveAsk(int **, int, int, int, int);

int main ( void ) {
   int **board = (int *)(malloc(sizeof(int*) * ROW));

    for(int i = 0; i < ROW; i++) {
        board[i] = (int *)(malloc(sizeof(int) * COLUMN));
    }

    initializeMatrix(board);
    moveAsk(board, 2, 3, 2, 6);
    printBoard(board);

    printf("\nValid destine: %d", moveAsk(board, 2, 3, 2, 6)); 
}

int moveAsk(int **board, int rOrigin, int cOrigin, int rDestine, int cDestine) {
    for(int i = rOrigin - 1; i >= 0; i -= 1) {
        for(int j = cOrigin - 1; j >= 0; j -= 1) {
            board[i][j] = 1;
        }
    }
    board[rOrigin][cOrigin] = -1;
    if( board[rDestine][cDestine] == 1 ) return 1;
    return 0;
}

void initializeMatrix(int **matrix) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            matrix[i][j] = 0;
        }
    }    
}

void printBoard(int **board) {
    printf("\n");
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}