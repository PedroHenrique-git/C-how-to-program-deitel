#include<stdio.h>
#include<string.h>

int main ( void ) {
	const char *string1 = "abcdefabcdef";
	const char *string2 = "def";
	
	printf("%s%s\n%s%s\n\n%s\n%s%s\n",
			"string1 = ", string1, "string2 = ", string2,
			"O restante de string1 que comeca com a",
			"primeira ocorrencia de string2 e: ",
			strstr(string1, string2));
}
