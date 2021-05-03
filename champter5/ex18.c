#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20

int gerarNumero( void ) {
	return 1 + ( rand () % 20 );
}

int searchKey(int arr[], int tam, int key) {
	for(int i = 0; i < tam; i++) {
		if( arr[i] == key ) return 1;
	}
	return -1;
}

void showArr(int arr[], int tam) {
	for(int i = 0; i < tam; i++) {
		printf("\nElemento %d do array: %d", i, arr[i]);
	}
}

int main ( void ) {
	int numero;
	int arr[SIZE] = { 0 };
	srand(time(NULL));
	
	for(int i = 0; i < 20; i++) {
		numero = gerarNumero();
		if( searchKey(arr, SIZE, numero) == -1 ) 
			arr[i] = numero;
		else
			arr[i] = -1;
	}
	
	showArr(arr, SIZE);
}
