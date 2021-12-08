#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COLUMNS 2

float avgMatrixElements(int **);

int main ( void ) {
    int **matrix = (int **)(malloc(sizeof(int*)));
    
    for(int i = 0; i < ROW; i++) matrix[i] = (int *)(malloc(sizeof(int)));

    printf("\nDigite os elementos da matriz: \n");    
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            printf("elemento [%i][%d] da matriz: ", i, j);
            scanf("%d", &matrix[i][j]);   
        }
    }
    
    printf("\nMedia dos elementos da matriz: %.2f", avgMatrixElements(matrix));

    for(int i = 0; i < ROW; i++) free(matrix[i]);
    free(matrix);
}

float avgMatrixElements(int **matrix) {
    float avg = 0;
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            avg += matrix[i][j];
        }
    }
    return avg / ( ROW * COLUMNS );
}