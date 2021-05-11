#include<stdio.h>

int main ( void ) {
	char c;
	char setence[80];
	int i = 0;
	
	puts("Digite uma linha de texto: ");
	
	while( ( c = getchar() ) != '\n' ) {
		setence[ i++ ] = c;
	}
	
	setence[i] = '\0';
	
	puts("\nA linha digitada foi: ");
	puts(setence);
}
