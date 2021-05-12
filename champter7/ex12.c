#include<stdio.h>
#include<string.h>

int main ( void ) {
	const char *string1 = "Isso e um teste";
	const char *string2 = "cerrado";
	
	printf("%s\'%s\'\n’%c’%s\n\'%s\'\n", 
			"Dos caracteres em ", string2,
			*strpbrk(string1, string2),
			" aparece primeiro em ", string1 );
}
