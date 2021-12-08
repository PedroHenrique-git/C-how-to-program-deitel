#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char * rua;
    char * logradouro;
    char * complemento;
    char * bairro;
    char * cidade;
    char * estado;
    char * cep;
    int numero;
} typedef Endereco;

Endereco * createEndereco (
    char * rua, 
    char * logradouro, 
    char * complemento,
    char * bairro,
    char * cidade,
    char * estado,
    char * cep, 
    int numero 
) {
    Endereco * end = (Endereco *)(malloc(sizeof(Endereco)));

    end->numero = numero;
    end->rua = rua;
    end->logradouro = logradouro;
    end->complemento = complemento;
    end->bairro = bairro;
    end->cidade = cidade;
    end->estado = estado;
    end->cep = cep;

    return end; 
}

int main ( void ) {

    char * rua = (char *)(malloc(sizeof(char))); 
    char * logradouro = (char *)(malloc(sizeof(char))); 
    char * complemento = (char *)(malloc(sizeof(char))); 
    char * bairro = (char *)(malloc(sizeof(char))); 
    char * cidade = (char *)(malloc(sizeof(char))); 
    char * estado = (char *)(malloc(sizeof(char))); 
    char * cep = (char *)(malloc(sizeof(char))); 
    int numero;

    printf("Digite sua rua: ");
    gets(rua);

    printf("Digite seu logradouro: ");
    gets(logradouro);

    printf("Digite seu complemento: ");
    gets(complemento);

    printf("Digite seu bairro: ");
    gets(bairro);

    printf("Digite seu cidade: ");
    gets(cidade);

    printf("Digite seu estado: ");
    gets(estado);

    printf("Digite seu cep: ");
    gets(cep);

    printf("Digite seu numero: ");
    scanf("%d", &numero);

    Endereco * endereco = createEndereco(rua, logradouro, complemento, bairro, cidade, estado, cep, numero);

    printf("Seu endereco: %s %s %s %s %s %s %s - %d", endereco->rua, endereco->logradouro, endereco->complemento, endereco->bairro, endereco->bairro, endereco->estado, endereco->cep, endereco->numero);

    free(rua);
    free(logradouro);
    free(complemento);
    free(bairro);
    free(cidade);
    free(estado);
    free(cep);
    free(endereco);
}