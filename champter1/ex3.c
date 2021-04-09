#include<stdio.h>

void trocaValores(int &a, int &b) {
	int aux = 0;
	
	aux = a;
	a = b;
	b = aux;	
}

int main( void ) {
	int n1, n2;
	
	printf("Digite dois numeros: ");
	scanf("%d%d", &n1, &n2);
	
	printf("\nvalores antes da troca %d e %d", n1, n2);
	
	trocaValores(n1, n2);
	
	printf("\nvalores depois da troca %d e %d", n1, n2);
}
