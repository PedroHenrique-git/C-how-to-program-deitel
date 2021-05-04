#include<stdio.h>

int main ( void ) {
	int a;
	int *aPtr;
	
	a = 7;
	aPtr = &a;
	
	printf("O endereco de a e %p\nO valor de aPtr e %p", &a, aPtr);
	printf("\n\nO valor de a e %d\nO valor de *aPtr e %d", a, *aPtr);
	printf("\n\nMostrando & e *\nvalor de &*aPtr: %p\nvalor de *&aPtr: %p", &*aPtr, *&aPtr);
}
