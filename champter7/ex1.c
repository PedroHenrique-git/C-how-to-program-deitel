#include<stdio.h>
#include<ctype.h>

int main ( void ) {
	int is = isdigit('8');
	printf("e um digito: %s", is ? "sim\n" : "nao\n");
	
	is = isalpha('a');
	printf("e uma letra: %s", is ? "sim\n" : "nao\n");
	
	is = isalnum('#');
	printf("e letra ou numero: %s", is ? "sim\n" : "nao\n");
	
	is = isxdigit('F');
	printf("e um digito hexadecimal: %s", is ? "sim\n" : "nao\n");
	
	printf("e minuscula: %s", islower('a') ? "sim\n" : "nao\n");
	printf("e minuscula: %s", islower('b') ? "sim\n" : "nao\n");
	printf("e minuscula: %s", islower('A') ? "sim\n" : "nao\n");
	printf("e minuscula: %s", islower('z') ? "sim\n" : "nao\n");
	
	printf("\ne maiuscula: %s", isupper('a') ? "sim\n" : "nao\n");
	printf("e maiuscula: %s", isupper('A') ? "sim\n" : "nao\n");
	printf("e maiuscula: %s", isupper('A') ? "sim\n" : "nao\n");
	printf("e maiuscula: %s", isupper('Y') ? "sim\n" : "nao\n");
	
	printf("\ne caractere de espaco em braco: %d\n", isspace('\n'));
	printf("e caractere de controle: %d\n", iscntrl('$'));
	printf("e caractere de pontuacao: %d\n", ispunct(':'));
	printf("e caractere de imprimivel: %d\n", isprint(' '));
	
	printf("\nmaiuscula para minuscula: %c\n", tolower('A'));
	printf("minuscula para maiuscula: %c\n", toupper('a'));
	printf("maiuscula para minuscula: %c\n", tolower('X'));
	printf("minuscula para maiuscula: %c\n", toupper('y'));
}
