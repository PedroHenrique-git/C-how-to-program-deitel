#include<stdio.h>

size_t getSize( float *Ptr ) {
	return sizeof(Ptr);
}

void showArray(float *arr) {
	for(int i = 0; i < 20; i++) {
		printf("\n\n%f\n", *arr);
	}
}

int main ( void ) {
	float x;
	float array[20] =  { 1 };
	int mat[10][10];
	int n = 10;
	float *ptr = array;
	
	int tamanhoDoArray = sizeof(array)  / sizeof(array[0]);
	
	printf("Tamanho de x: %lu\n", sizeof(x));
	printf("Numero de bytes do array: %lu\n", getSize(array));
	printf("Numero de bytes matriz: %lu\n", sizeof(mat));
	printf("numero de bytes inteiro: %lu\n", sizeof(n));
	printf("Tamanho do array: %d\n", tamanhoDoArray);
	printf("Tamanho do array: %f", *ptr);
	
	showArray(array);
}
