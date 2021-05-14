#include<stdio.h>
#include<string.h>

char *showWordInFalseLatim(char *string) {
	memmove(&string[ strlen(string) - 1 ], &string[0], 1);
	memmove(&string[0], &string[0 + 1], strlen(string - 0));
	strcat(string, "ei");
	return string;
}

int main ( void ) {
	char string[40];
	char *strings;
	
	puts("Digite uma frase: ");
	fgets(string, 40, stdin);
	
	strings = strtok(string, " ");
	while( strings != NULL ) {
		printf("\n%s", showWordInFalseLatim(strings));
		strings = strtok(NULL, " ");
	}
}
