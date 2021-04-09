#include<stdio.h>

int main ( void ) {
	int num1, num2;
	
	printf("Digite dois numeros: ");
	scanf("%d%d", &num1, &num2);
	
	if ( num1 > num2 ) {
		printf("%d e maior: ", num1);
	} else if (num1 == num2) {
		printf("%d e %d sao iguais", num1, num2);	
	}
}
