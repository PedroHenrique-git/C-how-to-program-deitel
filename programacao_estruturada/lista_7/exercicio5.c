#include<stdio.h>

typedef struct racional {
    int numerador;
    int denominador;
} NumeroRacional;

int main ( void ) {
    NumeroRacional racional;

    printf("Digite o numerador e denominador do numero: ");
    scanf("%d%d", &racional.numerador, &racional.denominador);

    printf("\nNumero racional digitado: %d/%d", racional.numerador, racional.denominador);
}