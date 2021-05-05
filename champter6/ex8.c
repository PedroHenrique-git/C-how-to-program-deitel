#include<stdio.h>

void copy1( char * const s1, const char * const s2 )
{
	int i;
	for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; i++ ) {
		;
	}
}

void copy2(char *s1, const char *s2) {
	for(; ( *s1 = *s2 ) != '\0'; s1++, s2++){}
}

int main ( void ) {
		char string1[10];
		char *string2 = "ola";
		char string3[10];
		char string4[] = "Adeus";
		
		copy1(string1, string2);
		printf("String1 = %s\n", string1);
		
		copy2(string3, string4);
		printf("String3 = %s\n", string3);
}
