#include<stdio.h>

int even(int n) {
	if( n % 2 == 0 ) return 1;
	return 0;
}

int main ( void ) {
	int i;
	for(i = 1; i <= 50; i++) {
		if(even(i)) {
			printf("%d e par\n", i);
		} else {
			printf("%d e impar\n", i);	
		}
	}	
}
