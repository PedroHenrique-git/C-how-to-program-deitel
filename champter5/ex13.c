#include<stdio.h>
#define SIZE 21

int searchKey(int arr[], int tam, int key) {
	for(int i = 0; i < tam; i++) {
		if ( arr[i] == key)
			return i;
	}
	return -1;
}

int main ( void ) {
	int n;
	int arr[SIZE] = { 0 };
	
	printf("Digite numeros inteiros entre 10 e 100\n\n");
	for(int i = 1; i <= 20; i++) {
		printf("numero %d: ",i);
		scanf("%d", &n);
		if ( searchKey( arr, SIZE, n ) == -1 ) printf("%d\n", n);
		arr[i] = n;
	}
}
