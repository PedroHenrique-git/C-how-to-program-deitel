#include<stdio.h>

int multiple(int n1, int n2) {
	if ( n2 % n1 == 0 ) {
		return 1;	
	}
	return 0;  
}	

int main ( void ) {
	int i;
	int j;
	for(i = 1; i <= 50; i++) {
		for(j =50; j >= 1; j--) {
			printf("%d e multiplo de %d: %d\n", j, i, multiple(i,j));
		}	
	}	
}
