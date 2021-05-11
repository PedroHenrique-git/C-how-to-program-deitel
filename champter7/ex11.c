#include<stdio.h>

int main ( void ) {
	const char *string1 = "O valor e 3.14159";
	const char *string2 = "1234567890";
	
	printf("%s%s\n%s%s\n\n%s\n%s%u\n", 
			"string1 = ", string1, "string2 = ", string2,
			"O comprimento do segmento inicial de string1 que nao contem caracteres de string2 = ", strcspn( string1, string2 ));
}
