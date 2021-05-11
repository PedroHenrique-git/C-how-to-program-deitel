#include<stdio.h>

int main ( void ) {
	char s[80];
	int x;
	double y;
	
	printf("Digite um inteiro e um double:\n");
	scanf("%d%lf", &x, &y);
	
	sprintf(s, "inteiro: %6d\ndouble:%8.2f", x, y);
	
	printf("%s\n%s\n", "A saida formatada amazenada no array s e: ", s);
}
