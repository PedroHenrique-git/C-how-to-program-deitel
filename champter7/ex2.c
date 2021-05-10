#include<stdio.h>
#include<stdlib.h>

int main ( void ) {
	double d = atof("99.0");
	printf("%lf", d / 2);
	
	int n = atoi("789");
	printf("\n%d", n /3);
	
	long l = atol("1000000");
	printf("\n%ld", l / 2);
	
	const char *string = "51.2% sao admitidos";
	
	char *stringPtr;
	double d2 = strtod(string, &stringPtr);
	
	printf("A string convertido: %s\n", string);
	printf("O valor double:  %lf, a string convertida: %s\n", d2, stringPtr);
	
	char *stringPtr2;
	long d3 = strtol(string, &stringPtr2, 0);
	
	printf("\nA string convertido: %s\n", string);
	printf("O valor long:  %ld, a string convertida: %s\n", d3, stringPtr2);
	
	char *stringPtr3;
	unsigned long d4 = strtol(string, &stringPtr3, 0);
	
	printf("\nA string convertido: %s\n", string);
	printf("O valor long:  %lu, a string convertida: %s\n", d4, stringPtr3);
}
