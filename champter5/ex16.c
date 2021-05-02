#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 13

int jogaDado() {
	return 1 + ( rand()  % 6 );
}

void mostraFrequencias(int freq[], int tam) {
	for(int i = 0; i < tam; i++) {
		printf("frequencia do numero %d: %d\n", i, freq[i]);
	}
}

int main ( void ) {
	int freq[SIZE] = { 0 };
	int dado1, dado2, soma = 0;
	
	srand(time(NULL));
	
	for(int i = 1; i <= 36000; i++) {
		dado1 = jogaDado();
		dado2 = jogaDado();
		soma = dado1 + dado2;
		freq[ soma ]++;
	}
	
	mostraFrequencias(freq, SIZE);
	
}
