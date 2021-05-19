#include<stdio.h>

void displayBits( unsigned value );

int main ( void ) {
	unsigned number1;
	unsigned number2;
	unsigned mask;
	unsigned setBits;
	
	number1 = 65535;
	mask = 1;
	printf("O resultado da combinacao dos seguintes\n");
	displayBits(number1);
	displayBits(mask);
	printf("usando o operador AND sobre bits & e\n");
	displayBits(number1 & mask);
	
	number1 = 15;
	setBits = 241;
	printf("\nO resultado da combinacao dos seguintes\n");
	displayBits(number1);
	displayBits(setBits);
	printf("usando o operador OR inclusivo sobre bits e\n");
	displayBits(number1 | setBits);
	
	number1 = 139;
	number2 = 199;
	printf("\nO resultado da combinacao dos seguintes\n");
	displayBits(number1);
	displayBits(number2);
	printf("usando o operador OR exclusivo sobre bits e\n");
	displayBits(number1 ^ number2);
	
	number1 = 7;
	printf("\nO complemento de um\n");
	displayBits(number1);
	printf("e\n");
	displayBits(~number1);
}

void displayBits ( unsigned value ) {
	unsigned c;
	
	unsigned displayMask = 1 << 31;
	
	printf("%10u", value);
	
	for(c = 1; c <= 32; c++) {
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;
		
		if ( c % 8 == 0 ) {
			putchar(' ');
		}
	}
}
 
