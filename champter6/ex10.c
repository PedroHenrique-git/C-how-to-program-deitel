#include<stdio.h>
#define ALUNOS 4
#define TESTES 4

void receberDados(int notas[][TESTES], int tamanho) {
	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < TESTES; j++) {
			printf("Digite a nota do teste %d do aluno %d: ", j, i);
			scanf("%d", &notas[i][j]);
		}
		printf("\n");
	}
}

void mostrarDados(int notas[][TESTES], int tamanho) {
	printf("\nDados dos testes\n\n");
	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < TESTES; j++) {
			printf("Nota teste %d, aluno %d: %d\n", j, i, notas[i][j]);
		}
	}
}

void menorNota(int notas[][TESTES], int tamanho) {
	int menorNota = 10;
	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < TESTES; j++) {
			if(notas[i][j] < menorNota) menorNota = notas[i][j];  
		}
	}
	printf("\nA menor nota foi: %d\n", menorNota);
}

void maiorNota(int notas[][TESTES], int tamanho) {
	int maiorNota = 0;
	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < TESTES; j++) {
			if(notas[i][j] > maiorNota) maiorNota = notas[i][j];  
		}
	}
	printf("\nA maior nota foi: %d\n", maiorNota);
}

void mediaDosTestes(int notas[][TESTES], int tamanho) {
	float media = 0;
	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < TESTES; j++) {
			media += notas[i][j];
		}
		printf("\nMedia dos testes do aluno %d: %.2f\n", i, media / TESTES);
		media = 0;
	}
}

int main ( void ) {
	int escolha;
	  
	int notas[ALUNOS][TESTES] = { { 0, 0, 0, 0 }  };
	receberDados(notas, ALUNOS);
	
	while(escolha >= 0 && escolha < 4) {
		printf("\nDigite um número entre 0, 3 e 4 para terminar: \n");
		scanf("%d", &escolha);
		
		if(escolha == 0) mostrarDados(notas, ALUNOS);
		if(escolha == 1) menorNota(notas, ALUNOS); 
		if(escolha == 2) maiorNota(notas, ALUNOS); 
		if(escolha == 3) mediaDosTestes(notas, ALUNOS); 
	}
}
