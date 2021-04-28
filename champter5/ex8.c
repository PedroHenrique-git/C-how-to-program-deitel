#include<stdio.h>
#define SIZE 10

int sumArray(const int n[], int tam) {
	int sum = 0;
	for(int i = 0; i < tam; i++) {
		sum += n[i];
	}
	return sum;
}

void bubbleSort(int n[], int tam) {
	int aux = 0;
	
	for(int i = 0; i < tam; i++) {
		for(int j = i; j < tam; j++) {
			if(n[i] > n[j]) {
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
		}
	}
}

int search(int n[], int tam, int key) {
	for(int i = 0; i < tam; i++) {
		if(n[i] == key) {
			return i;
		}
	}
	return -1;
}

int main ( void ) {
	int n[SIZE] = { 424, 8, 5, 3, 10, 19, 20, 50, 99, 100 };
	
	printf("Array desordenado: \n");
	for(int i = 0; i < 10; i++) {
		printf("%d\n", n[i]);
	}
	
	printf("\n\nArray ordenado: \n");
	bubbleSort(n, SIZE);
	for(int i = 0; i < 10; i++) {
		printf("%d\n", n[i]);
	}
	
	printf("\n\n\npequisa no array: %d", search(n, SIZE, 424));
}
