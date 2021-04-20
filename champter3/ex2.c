#include<stdio.h>

int main ( void ) {
    int n1, n2, cont = 0;

    printf("digite dois numeros: ");
    scanf("%d%d", &n1, &n2);

    for(int i = 0; i < n1; i++) {
        cont += n2;
        printf("%d ", cont);
    }
}
