#include<stdio.h>
#include<string.h>

int main ( void ) {
	char x[] = "Lar Doce Lar";
	
	printf("%s%s\n", "A string no array x antes de memmove e: ", x);
	printf("%s%s\n", "A string no array x depois de memmove e: ", memmove(x, &x[5], 10));
}
