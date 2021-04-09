#include <stdio.h>

int main(void) {
	int numero1;
	int numero2;

	printf("Digite dois numeros: ");
	scanf("%d%d", &numero1, &numero2);
	
	if( numero1 == numero2 ) {
		printf("%d e %d sao iguais\n", numero1, numero2);
	}
	
	if ( numero1 != numero2 ) {
		printf("%d e %d sao diferentes\n", numero1, numero2);
	}
	
	if ( numero1 > numero2 ) {
		printf("%d maior que %d\n", numero1, numero2);
	}
	
	if ( numero1 < numero2 ) {
		printf("%d menor que %d\n", numero1, numero2);
	}
	
	if ( numero1 >= numero2 ) {
		printf("%d maior ou igual a %d\n", numero1, numero2);
	} 
	
	if( numero1 <= numero2 ) {
		printf("%d menor ou igual a %d\n", numero1, numero2);	
	}
	
	system("pause");
}
