#include<stdio.h>

int main ( void ) {
    int numero, aux, maior = 0;

    for(int i = 0; i < 9; i++) {
        printf("digite um numero: ");
        scanf("%d", &numero);
        aux = numero;

        if(aux > maior) {
            maior = aux;
        }
    }
    printf("\nO maior numero digitado e: %d", maior);
}
