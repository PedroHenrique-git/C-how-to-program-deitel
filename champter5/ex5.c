#include<stdio.h>
#define RESPONSES 40
#define FREQUENCY 11

int main ( void ) {
	int i;
	
	int responses[RESPONSES] = { 
		1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,
		1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,
		1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,
		1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,
	};
	
	int frequency[FREQUENCY] = { 0 };
	
	for(i = 0; i < RESPONSES; i++) {
		frequency[ responses[i] ]++;
	}
	
	for(i = 1; i < FREQUENCY; i++) {
		printf("frequencia das notas %d - %d\n", i, frequency[i]);
	}
}
