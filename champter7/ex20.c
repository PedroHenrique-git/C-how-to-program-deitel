#include<stdio.h>
#include<string.h>

int main ( void ) {
	const char *s = "Isso e uma string";
	
	printf("%s\’%c\’%s\'%s\'\n",
			"O restante de s apos o caractere ", 'r',
			" ser encontrado e ", memchr(s, 'r', 16));
}
