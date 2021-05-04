#include<stdio.h>

void changeValues(int *number1Ptr, int *number2Ptr) {
	int aux = 0;
	aux = *number1Ptr;
	*number1Ptr = *number2Ptr;
	*number2Ptr = aux;
}

int main( void ) {
	int n1, n2;
	printf("Digite dois numeros: ");
	scanf("%d%d", &n1, &n2);
	
	printf("\nValores antes da troca: %d e %d", n1, n2);
	
	changeValues(&n1, &n2);
	
	printf("\nValores depois da troca: %d e %d", n1, n2);
}
