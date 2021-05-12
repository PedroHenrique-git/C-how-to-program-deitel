#include<stdio.h>
#include<string.h>

int main ( void ) {
	char string[] = "Essa e uma setenca com 7 tokens";
	char *tokenPtr;
	
	printf("%s\n%s\n\n%s\n",
			"A string a ser separada em tokens e: ", string,
			"Os tokens sao: ");
	
	tokenPtr = strtok(string, " ");
	
	while(tokenPtr != NULL) {
		printf("%s\n", tokenPtr);
		tokenPtr = strtok(NULL, " ");
	}
}
