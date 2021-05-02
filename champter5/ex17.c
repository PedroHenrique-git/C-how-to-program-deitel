#include<stdio.h>
#define SIZE 11

int setChair(int chairs[], int typeChair) {
	int i, tam;
	
	if( typeChair == 1 ) {
		i = 1;
		tam = 5;
	} else {
		i = 6;
		tam = 10;
	}
	
	for(; i <= tam; i++) {
		if( chairs[i] == 0 ){
			chairs[i] = 1;
			return i;
		}
	}
	
	return 0;
}

int changeChairClass(int chairs[], int typeChair) {
	if( typeChair == 1 ) typeChair = 2;
	else typeChair = 1;
	
	return setChair(chairs, typeChair);
}

void showInformations(int chair) {
	if( chair <= 5 ) printf("\nclasse escolhida: primeira classe\n");
	else printf("\nclasse escolhida: classe ecônomica\n");
	printf("assento: %d\n", chair);
}

int main ( void ) {
	int typeChair, choice, chair, newChair;
	int chairs[SIZE] = { 0 };
	
	for(int i = 1; i <= 10; i++) {
		printf("Favor digitar 1 para 'primeira classe'\nFavor digitar 2 para 'ecônomica': ");
		scanf("%d", &typeChair);
		
		chair = setChair(chairs, typeChair);
		
		if( chair ) {
			showInformations(chair);
		} else {
			printf("\nCategoria cheia, gostaria de trocar de categoria? (0 - nao, 1 - sim) \n");
			scanf("%d", &choice);
			
			if( choice == 1 ) {
				newChair = changeChairClass(chairs, typeChair);
				showInformations(newChair);
			} else {
				printf("\nO próximo voo sairá em 3 horas.\n");
			}
		}
		
		printf("\n");
	}
}
