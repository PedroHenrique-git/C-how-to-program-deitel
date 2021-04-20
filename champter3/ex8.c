#include<stdio.h>

int main ( void ) {
    float valor = 500, taxa = 1, dias = 1;
    for(int i = 5; i <= 10; i++) {
        taxa = (float) i / 100;
        printf("\nvalor com taxa de %d: %.2f", i, (valor * taxa * dias) / 365);
        dias += 1;
    }
}
