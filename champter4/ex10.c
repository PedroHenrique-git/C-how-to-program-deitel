#include<stdio.h>

int potenciaInt(int numero, int expoente) {
	if( expoente == 0 ) return 1;
	
	int i;
	int resultado = 1;
	for( i = 1; i <= expoente; i++) {
		resultado *= numero;
	}
	return resultado;
}

int main ( void ) {
	printf("%d", potenciaInt(2,0));	
}
