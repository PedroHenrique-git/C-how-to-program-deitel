#include<stdio.h>

void staticArrayInit( void ) {
	static int array[3];
	int i;
	
	printf("\nValores na entrada de staticArrayInit:\n");
	
	for (i = 0; i <= 2; i++) {
		printf("array[%d] = %d", i, array[i]);
	}
	
	printf("\nValores na saida de staticArrayInit:\n");
	
	for(i = 0; i <= 2; i++) {
		printf("array[%d] = %d", i, array[i] += 5);
	}
}

void automaticArrayInit( void ) {
	int array2[3] = { 1, 2, 3 };
	int i;
	
	printf("\n\nValores na entrada de automaticArrayInit:\n");
	
	for(i = 0; i <= 2; i++) {
		printf("array2[%d] = %d", i,  array2[i]);
	}
	
	printf("\nValores na saida de automaticArrayInit:\n");
	
	for(i = 0; i <= 2; i++) {
		printf("array[%d] = %d", i, array2[i] += 5);
	}
}
 
int main ( void ) {
	printf("Primeira chamada para cada função:\n");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n\nSegunda chamada para cada função:\n");
	staticArrayInit();
	automaticArrayInit();
}
