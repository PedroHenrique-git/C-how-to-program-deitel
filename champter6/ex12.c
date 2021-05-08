#include<stdio.h>

void soma(double n1, double n2) {
	printf("Soma entre %lf e %lf: %lf", n1, n2, n1 + n2);
}

void subtracao(double n1, double n2) {
	printf("Subtracao entre %lf e %lf: %lf", n1, n2, n1 - n2);
}

void multiplicacao(double n1, double n2) {
	printf("Multiplicacao entre %lf e %lf: %.2lf", n1, n2, n1 * n2);
}

void divisao(double n1, double n2) {
	printf("Divisao entre %lf e %lf: %lf", n1, n2, n1 / n2);
}

int main ( void ) {
	int conta;
	double n1, n2;
	
	void(*f[4])(double, double) = { soma, subtracao, multiplicacao, divisao };
	
	printf("Digite numeros entre 0 e 3, 4 para terminar: ");
	scanf("%d", &conta);
	
	while(conta >= 0 && conta < 4) {
		printf("\nDigite dois numeros: ");
		scanf("%lf%lf", &n1, &n2);
		(*f[conta])(n1, n2);
		
		printf("\nDigite numeros entre 0 e 3, 4 para terminar: ");
		scanf("%d", &conta);
	}
}
