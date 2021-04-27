#include<stdio.h>
#define SIZE 12

int main ( void ) {
	int n[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int i, soma = 0;

	for(i = 0; i < SIZE; i++) {
		soma += n[i];
	}
	
	printf("o valor da soma e: %d", soma);
}
