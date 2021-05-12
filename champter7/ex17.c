#include<stdio.h>
#include<string.h>

int main ( void ) {
	char s1[18];
	char s2[] = "Copie essa string";
	
	memcpy(s1, s2, 18);
	
	printf("%s\n%s\'%s\'\n",
			"Depois que s2 e copiada em s1 com memcpy,",
			"s1 contem ", s1);
}
