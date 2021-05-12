#include<stdio.h>
#include<string.h>

int main ( void ) {
	char string1[15] = "BBBBBBBBBBBBBB";
	
	printf("string1 = %s\n", string1);
	printf("string1 depois de memset = %s\n", memset(string1, 'b', 7));
}
