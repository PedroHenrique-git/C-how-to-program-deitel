#include<stdio.h>

float calculaTaxa(float qtdHoras) {
	if ( qtdHoras <= 3.00 ) {
		return 2.0;
	} else if ( qtdHoras == 24 ) {
		return 10.0;
	} else {
		return 2.0 + ( qtdHoras * 0.50 );
	}
}

int main ( void ) {
	int i;
	float h;
	for(i == 1; i <= 3; i++) {
		printf("carro: %d\n",i);
		printf("Digite a quantidade de horas: ");
		scanf("%f", &h);
		printf("Valor a ser pago, carro %d: %.1f\n\n",i, calculaTaxa(h));
	}
}
