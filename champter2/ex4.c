#include<stdio.h>

int main ( void ) {
    float principal, taxa, dias;

    while(1) {
        printf("\nDigite o valor principal (-1 para finalizar): ");
        scanf("%f", &principal);
        if(principal == -1) break;
        printf("\nInforme a taxa de jutos: ");
        scanf("%f", &taxa);
        printf("\nInforme o prazo do emprestimo em dias: ");
        scanf("%f", &dias);
        printf("O valor dos juros e de %f: ", (principal * taxa * dias) / 365);
    }
}