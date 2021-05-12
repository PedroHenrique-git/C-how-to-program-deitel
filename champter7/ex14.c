#include<stdio.h>
#include<string.h>

int main ( void ) {
	const char *string1 = "O valor e 3.14159";
	const char *string2 = "aeor lsOuv";
	
	printf("%s%s\n%s%s\n\n%s\n%s%zu\n",
			"string1 = ", string1, "string2 = ", string2,
			"O comprimento do segmento inicial de string1",
			"que contem apenas caracteres da string2 = ",
			strspn(string1, string2));
}
