#include<stdio.h>

int main ( void ) {
	int arr[4] = { 5, 6, 7, 8 } ;
	int *arrPtr = arr;
	int i;
	
	for(i = 0 ; i < 4; i++) {
		printf("%d ", *( arrPtr + i ));
	}
	
	printf("\n");
	
	for(i = 0; i < 4; i++) {
		printf("%d ", arrPtr[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 4; i++) {
		printf("%d ", *( arr + i ));
	}
}
