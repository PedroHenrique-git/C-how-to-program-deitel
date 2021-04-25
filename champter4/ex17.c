#include<stdio.h>

int main ( void ) {
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	while( num != 0 ) {
		printf("%d", num % 10);
		num /= 10;
	}
}
