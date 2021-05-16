#include<stdio.h>

typedef struct {
	char *nome;
	int idade;
}Pessoa;

void modifyAge(Pessoa *pessoa) {
	pessoa->idade = 50;
}

typedef Pessoa pessoas[10]; 

int main ( void ) {
	Pessoa *ptrPessoa, pessoa;
	pessoas p;
	p[0].nome = "Maria";
	p[0].idade = 80;
	
	pessoa.nome = "Pedro";
	pessoa.idade = 20;
	
	ptrPessoa = &pessoa;
	
	printf("Nome: %s, Idade: %d", pessoa.nome, pessoa.idade);
	modifyAge(ptrPessoa);
	printf("\nNome:%s, Idade: %d", ptrPessoa->nome, (*ptrPessoa).idade);
	printf("\nNome:%s, Idade: %d", p[0].nome, p[0].idade);
}
