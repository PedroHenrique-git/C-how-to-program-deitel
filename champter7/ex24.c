#include<stdio.h>
#include<stdlib.h>

int main ( void ){
	char string[20];
	double n, soma = 0;
	
	for(int i = 1; i <= 4; i++) {
		printf("Digite a string %d: ", i);
		scanf("%s", string);
		n = atof(string);
		soma += n;
	}
	
	printf("total: %lf", soma);
}
