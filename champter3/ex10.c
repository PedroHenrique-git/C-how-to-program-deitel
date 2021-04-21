#include<stdio.h>

int main ( void ) {
    int n = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite um numero de 1 a 30:");
        scanf("%d", &n);
        if ( !(n >= 1 && n <= 30) ) break;
        for(int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
