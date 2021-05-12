#include<stdio.h>
#include<string.h>

int main (void) {
	char string[] = "Isso e uma string";
	
	for(int i = 0; i < strlen(string); i++) {
		printf("%c\n", string[i]);
	}
	
	printf("%s\n", strerror(2));
}
