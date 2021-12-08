#include<stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLUMN 3

void orderedMatrix(int **);

int main ( void ) {
    int **matrix = (int *)(malloc(sizeof(int*) * ROW));

    for(int i = 0; i < ROW; i++) {
        matrix[i] = (int *)(malloc(sizeof(int) * COLUMN)); 
    }

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            printf("Digite o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    orderedMatrix(matrix);
    printf("\n");

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            printf("elemento [%d][%d] da matriz: %d\n", i, j, matrix[i][j]);
        }
        printf("\n");
    }
}

void orderedMatrix(int **matrix) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            if( matrix[i][j] > matrix[i][j + 1] ) {
                int aux = matrix[i][j];
                matrix[i][j] = matrix[i][j + 1];
                matrix[i][j + 1] = aux;
            }
        }
    }
}