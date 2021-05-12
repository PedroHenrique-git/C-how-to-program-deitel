#include<stdio.h>
#include<string.h>

int main ( void ) {
	char string1[10];
	char string2[10];
	
	printf("Digite a string 1: ");
	scanf("%s", string1);
	
	printf("Digite a string 2: ");
	scanf("%s", string2);
	
	if(strcmp(string1, string2) == 0) printf("Iguais");
	else if ( strcmp(string1, string2) < 0 ) printf("Conteudo da string 1 e menor do que da string 2");
	else printf("Conteudo da string 1 e maior do que da string 2"); 
}
