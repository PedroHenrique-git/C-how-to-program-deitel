#include<stdio.h>

int main ( void ) {
    int n, d1, d2, d3, d4, d5, numeroInvertido;

    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &n);

    d1 = (n / 10000) % 10;
    d2 = (n / 1000) % 10;
    d3 = (n / 100) % 10;
    d4 = (n / 10) % 10;
    d5 =  n % 10;

    numeroInvertido = (d5 * 10000) + (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;

    if( n == numeroInvertido ) {
        printf("eh um palindromo");
    } else {
        printf("nao eh um palindromo");
    }
}
