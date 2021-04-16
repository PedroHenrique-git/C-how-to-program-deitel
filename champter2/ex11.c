#include<stdio.h>

int main ( void ) {
    int n, numeroDecimal = 0, digito, div = 1, mult = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while ( n != 0 ) {
        digito = n % 10;
        numeroDecimal += digito * mult;
        mult *= 2;
        n /= 10;
    }

    printf("\n");
    printf("%d", numeroDecimal);
}
