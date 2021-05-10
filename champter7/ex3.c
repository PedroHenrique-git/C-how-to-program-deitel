#include<stdio.h>
#define SIZE 10

void reverse(char setence[]) {
	for(int i = SIZE; i >= 0; i--) {
		putchar(setence[i]);
	}
}

int main ( void ) {
	char setence[SIZE];
	
	printf("Digite um linha de texto:\n");
	fgets(setence, SIZE, stdin);
	
	printf("\nA linha ao contrario: ");
	reverse(setence);
}
