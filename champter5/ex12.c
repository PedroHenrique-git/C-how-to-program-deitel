#include<stdio.h>
#define SIZE 10

void soma(int arr[], int tam) {
	for(int i = 0; i < tam; i++) {
		arr[i] += 1;
	}
}

void showArray(int arr[], int tam) {
	printf("\nelementos do array\n");
	for(int i = 0; i < tam; i++) {
		printf("elemento %d do array: %d\n", i, arr[i]);
	}
}

int main ( void ) {
	int arr[SIZE] = { 0 };
	
	for(int i = 0; i < SIZE; i++) {
		printf("digite o elemento %d do array: ", i);
		scanf("%d", &arr[i]);
	}
	
	soma(arr, SIZE);
	
	showArray(arr, SIZE);
}
