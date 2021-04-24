#include<stdio.h>

int isPerfeito(int n) {
	int i;
	int sum = 0;
	for( i = 1; i <= n; i++ ) {
		if( n % i == 0 && i < n ) {
			sum += i;
		}	
	}
	
	if ( sum == n ) return 1;
	return 0;
}

int main ( void ) {
	int i;
	
	for( i = 1; i <= 1000; i++ ) {
		printf("%d eh perfeito: %d\n", i, isPerfeito(i));
	}
}
