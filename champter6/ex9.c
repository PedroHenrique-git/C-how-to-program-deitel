#include<stdio.h>

void function1(int a) {
	printf("Voce digitou %d, de modo que function1 foi chamada\n\n", a);
}

void function2(int a) {
	printf("Voce digitou %d, de modo que function1 foi chamada\n\n", a);
}

void function3(int a) {
	printf("Voce digitou %d, de modo que function1 foi chamada\n\n", a);
}

int main ( void ) {
	void (*f[3])(int) = { function1, function2, function3 };
	
	int choice;
	
	printf("Digite um numero entre 0 e 2, e para sair: ");
	scanf("%d", &choice);
	
	while(choice >= 0 && choice < 3) {
		(*f[choice])(choice);
		
		printf("Digite um número entre 0, 2 e 3 para terminar: ");
		scanf("%d", &choice);
	}
	
	printf("Execucao do programa concluida\n");
}
