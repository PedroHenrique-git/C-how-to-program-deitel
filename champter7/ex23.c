#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100

void toUpper(char *string) {
	for(int i = 0; i < strlen(string); i++) {
		printf("%c", toupper(string[i]));
	} 
}

void toLower(char *string) {
	for(int i = 0; i < strlen(string); i++) {
		printf("%c", tolower(string[i]));
	} 
}

int main ( void ) {
	char s[100];
	
	puts("Digite um texto em linha: ");
	fgets(s, 100, stdin);
	
	toUpper(s);
	printf("\n");
	toLower(s);
}
