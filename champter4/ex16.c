#include<stdio.h>
#include<math.h>

int ehPrimo(int n) {
	int i;
	int cont = 0;
	for(i = 1; i <= n; i++) {
		if( n % i == 0 ) cont++;
	}
	if(cont == 2) return 1;
	return 0;
}

int main ( void ) {
	int i;
	for(i = 1; i <= 10000; i++) {
		if(ehPrimo(i)) {
			printf("%d e primo\n", i);	
		}	
	}	
}
