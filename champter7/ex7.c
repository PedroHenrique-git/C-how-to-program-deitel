#include<stdio.h>
#include<string.h>

int main ( void ) {
	char x[] = "Parabens a voce";
	char y[25];
	char z[15];
	
	printf("%s%s\n%s%s\n", "A string no array x e: ", x, "A string no array y e: ", strcpy(y, x));
	
	strncpy(z, x, 14);
	z[14] = '\0';
	printf("A string no array z e: %s\n", z);
}
