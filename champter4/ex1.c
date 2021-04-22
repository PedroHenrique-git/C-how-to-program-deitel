#include<stdio.h>

int square (int x) {
	return x * x;
}

int main ( void ) {
	int i;
	for(i = 1; i <= 10; i++) {
		printf("%d\n", square(i));
	}	
}
