#include<stdio.h>

void printfMatrix(int mat[][3], int linha) {
	for(int i = 0; i < linha; i++) {
		for(int j = 0; j < 3; j++) {
			printf(" %d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main ( void ) {
	int mat1[2][3] = { { 1, 2, 3 }, { 3, 4, 5 } };
	int mat2[2][3] = { { 9, 0 }, { 1, 0 } };
	int mat3[2][3] = { { 111, 222, 333 }, { 322, 433, 666 } };
	
	printf("Mostrando elementos dos arrays: \n");
	
	printfMatrix(mat1, 2);
	printfMatrix(mat2, 2);
	printfMatrix(mat3, 2);
}
