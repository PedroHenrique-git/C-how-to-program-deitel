#include<stdio.h>

int main ( void ) {
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if ( n == 1 || n == 0) fatorial = n;

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d", fatorial);
}
