#include<stdio.h>

int main ( void ) {
    float valor;

    while(1) {
        printf("\nInforme o valor da venda (-1 para terminar o programa): ");
        scanf("%f", &valor);
        if (valor == -1) break;
        printf("\nValor da comissao: %f", (valor * 0.09) + 200);
    }
}