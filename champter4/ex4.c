#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ( void ) {
	int i;
	//unsigned seed;
	
	//printf("Digite um numero: ");
	//scanf("%u", &seed);
	
	srand(time(NULL));
	
	for(i = 1; i <= 10; i++) {
		printf("%4d", 1 + ( rand() % 6 ));
		
		if ( i % 5 == 0 ) {
			printf("\n");
		}
	}
}
