#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip() {
	int moeda = 0 + ( rand() % 2 );
	return moeda;			
}

int main ( void ) {
	int cara, coroa;
	int i;
	
	srand(time(NULL));
	
	for(i = 1; i <= 100; i++) {
		if(flip()) {
			coroa++;
		} else {
			cara++;
		}
	}
	
	printf("quantidade de coroas: %d", coroa);
	printf("\nquantidade de caras: %d", cara);	
}
