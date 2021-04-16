#include<stdio.h>

int main ( void ) {
    int n, aux, maior1 = 0, maior2 = 0;

    for(int i = 0; i < 9; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        aux = n;

        if( aux > maior1 ) {
            maior2 = maior1;
            maior1 = aux;
        } else if( aux > maior2 ) {
            maior2 = aux;
        }

    }

    printf("Maiores numeros da sequencia: %d e %d", maior1, maior2);
}
