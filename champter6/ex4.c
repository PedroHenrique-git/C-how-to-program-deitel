#include<stdio.h>

void mostrarCaracteres(const char *stringPtr) {
	for(; *stringPtr != '\0'; stringPtr++) {
		printf("%c", *stringPtr);
	}
}

int main ( void ) {
	char string[] = "String de exemplo";
	
	printf("A string é : ");
	mostrarCaracteres(string);
}
