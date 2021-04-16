#include<stdio.h>

int main ( void ) {
    int n, digito, cont;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n != 0) {
        digito = n % 10;

        if (digito == 7) cont++;

        n /= 10;
    }

    printf("Numero de 7s: %d", cont);
}
