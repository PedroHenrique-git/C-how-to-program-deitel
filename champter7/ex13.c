#include<stdio.h>
#include<string.h>

int main ( void ) {
	const char *string1 = "Em um zoológico encontram-se muitos animais, inclusive zebras";
	
	int c = 'z';
	
	printf("%s\n%s’%c’%s\'%s\'\n",
			"O restante de string1 que comeca com a",
			"ultima ocorrencia do caractere ", c,
			" e: ", strrchr(string1, c));
}
