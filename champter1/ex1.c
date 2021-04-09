#include<stdio.h>

int main(void) {
	int numero1, numero2, soma;

	printf("Digite o numero 1: ");
	scanf(" %d", &numero1);

	printf("Digite o numero 2: ");
	scanf(" %d", &numero2);

	soma = numero1 + numero2;

	printf("Soma %d: ", soma);
}