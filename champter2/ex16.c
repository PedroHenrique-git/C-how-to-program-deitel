#include<stdio.h>

int fat( int n ) {
    int fatorial = 1;

    if(n == 0 || n == 1) return n;

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main ( void ) {
    int n;
    float e = 1, div;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        div = 1 / fat(i);
        e += div;
        printf("%f", 1 / fat(i));
        printf("\n");
    }

    printf("Valor da constante ate %d: %f", n, e);

}
