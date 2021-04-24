#include<stdio.h>
#include<math.h>

int main ( void ) {
	float n = 0;
	int i;
	for(i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%f", &n);
		printf("numero arredondado para baixo: %f", floor(n));
		printf("\n\n");	
	}
}
