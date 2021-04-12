#include<stdio.h>

int main ( void ) {
    int n1, n2, n3, n4, n5, maior, menor;

    printf("Digite cinco numeros seguidos: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    if ( n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        maior = n1;
    } else if ( n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        maior = n2;
    } else if ( n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        maior = n3;
    } else if ( n4 > n1 && n4 > n2 && n4 > n3 && n3 > n5) {
        maior = n4;
    } else {
        maior = n5;
    }

    if ( n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        menor = n1;
    } else if ( n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        menor = n2;
    } else if ( n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        menor = n3;
    } else if ( n4 < n1 && n4 < n2 && n4 < n3 && n3 < n5) {
        menor = n4;
    } else {
        menor = n5;
    }

    printf("maior: %d | menor: %d", maior, menor); 
}