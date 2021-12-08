#include<stdio.h>
#include<stdlib.h>

typedef struct telefone {
    char * ddd;
    char * numero;
    enum TipoTelefone {
        residencial = 1,
        comercial,
        movel
    } tipo;
} TelefoneList;

int main ( void ) {
    TelefoneList * telefone = (TelefoneList *)(malloc(sizeof(TelefoneList)));
    char * ddd = (char *)(malloc(sizeof(char)));
    char * numero = (char *)(malloc(sizeof(char)));
    int tipo;

    printf("Digite seu ddd: ");
    scanf("%s", ddd);

    printf("Digite seu numero: ");
    scanf("%s", numero);

    printf("Digite seu tipo: 1 - residencial, 2 - comercial, 3 - movel: ");
    scanf("%d", &tipo);

    telefone->ddd = ddd;
    telefone->numero = numero;
    telefone->tipo = tipo;

    printf("seu telefone: %d (%s) %s", telefone->tipo, telefone->ddd, telefone->numero);

    free(telefone);
    free(ddd);
    free(numero);
}