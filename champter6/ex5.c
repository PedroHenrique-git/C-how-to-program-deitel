#include<stdio.h>
#define SIZE 10

void swap(int *elemento1Ptr, int *elemento2Ptr) {
	int hold = *elemento1Ptr;
	*elemento1Ptr = *elemento2Ptr;
	*elemento2Ptr = hold;
}

void bubbleSort(int * const array, const int size) {
	int pass;
	
	for(pass = 0; pass < size - 1; pass++) {
		for(int i = 0; i < size - 1; i++) {
			if(array[i] > array[i + 1])
				swap(&array[i], &array[i + 1]);
		}
	}
}

int main ( void ) {
	int array[SIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	
	printf("Itens do array na ordem original\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	
	bubbleSort(array, SIZE);
	
	printf("\nItens do array em ordem crescente\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
}
