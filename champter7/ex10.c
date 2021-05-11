#include<stdio.h>
#include<string.h>

int main ( void ) {
	const char *string = "Isso e um teste";
	char character1 = 'u';
	char character2 = 'z';
	
	if(strchr(string, character1) != NULL) {
		printf("\'%c\' foi achado em \'%s\'. \n", character1, string);
	} else {
		printf("\'%c\' nao foi achado em \'%s\'. \n", character1, string);
	}
	
	if(strchr(string, character2) != NULL) {
		printf("\'%c\' foi achado em \'%s\'. \n", character2, string);
	} else {
		printf("\'%c\' nao foi achado em \'%s\'. \n", character2, string);
	}
}
