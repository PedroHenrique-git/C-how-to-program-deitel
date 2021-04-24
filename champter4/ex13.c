#include<stdio.h>

int main ( void ) {
	int n;
	int i;
	
	printf("Digite um numero: ");
	scanf("%d" ,&n);
	
	while( n != 0) {
		printf("digitos: %d\n", n % 10);
		n /= 10;
	}	
}
