#include<stdio.h>
#include<string.h>

int main ( void ) {
	char string1[10];
	char string2[10];
	
	printf("Digite a string 1: ");
	scanf("%s", string1);
	
	printf("Digite a string 2: ");
	scanf("%s", string2);
	
	if( strncmp( string1, string2, 4) == 0 ) printf("Iguais");
	else if ( strncmp( string1, string2, 4) < 0 ) printf("Conteudo da string1 e menor do que da string2"); 
	else printf("Conteudo da string1 e maior do que da string2"); 
}
