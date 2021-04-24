#include<stdio.h>

int fib(int n) {
	if( n == 0 || n == 1 ) {
		return n;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}

int fat(int n) {
	if(n == 0 || n == 1) {
		return n;
	} else {
		return n * fat(n - 1);
	}
}

int main ( void ) {
	int n = 10;
	int atual = 0;
	int prox = 1;
	int i;
	
	printf("versao iterativa\n");
	for(i = 1; i <= n; i++) {
		printf("%d\n", atual);
		atual = prox - atual;
		prox = prox + atual;
	}
	
	printf("versao recursiva\n");
	printf("%d\n", fib(n));
	printf("fatorial recursivo\n");
	printf("%d", fat(6));
}
