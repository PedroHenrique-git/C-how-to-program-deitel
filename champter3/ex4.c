#include<stdio.h>

int main ( void ) {
    int n = 0, numbers, menor;
    printf("digite um numero: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("digite um numero: ");
        scanf("%d", &numbers);

        if ( numbers < menor ) {
            menor = numbers;
        }
    }
    printf("Menor numero digitado: %d", menor);
}
