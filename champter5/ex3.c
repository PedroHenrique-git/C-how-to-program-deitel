#include<stdio.h>
#define SIZE 10

int main ( void ) {
	int s[SIZE];
	int j;
	
	for(j = 0; j < 10; j++) {
		s[j] = 2 + 2 * j;
	}
	
	for(j = 0; j < 10; j++) {
		printf("%7d%13d\n", j, s[j]);
	}
}
