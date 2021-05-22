#include<stdio.h>

int main ( void ) {
	int account;
	char name[30];
	double balance;
	
	FILE *cfPtr;
	
	if ( ( cfPtr = fopen("clientes.txt", "w") ) == NULL ) {
		printf("Arquivo nao pode ser aberto\n");
	} else {
		printf("Digite o numero da conta, o nome e o saldo.\n");
		printf("Digite fim de arquivo para terminar a entrada\n.");
		printf("? ");
		scanf("%d%s%lf", &account, name, &balance);
		
		while(!feof(stdin)) {
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf("%d%s%lf", &account, name, &balance);
		}
		
		fclose(cfPtr);
	}
}
