#include<stdio.h>

void displayBits( unsigned value ) {
	unsigned displayMask = 1 << 31;
	unsigned c;
	
	printf("%7u = ", value);
	
	for(c = 1; c <= 32; c++) {
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;
		
		if(c % 8 == 0) {
			putchar(' ');
		}
		
		putchar('\n');
	}
}

int main ( void ) {
	unsigned number1 = 960;
	
	printf("\nO resultado do deslocamento a esquerda de\n");
	displayBits(number1);
	printf("por 8 posicoes de bit usando o ");
	printf("operador de deslocamento a esquerda << e \n");
	displayBits(number1 << 8);
	
	printf("\nO resultado do deslocamento a direita de \n");
	displayBits(number1);
	printf("por 8 posicoes de bit usando o ");
	printf("operador de deslocamento a direita >> e\n");
	displayBits(number1 >> 8);
}
