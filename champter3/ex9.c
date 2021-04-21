#include<stdio.h>

int main ( void ) {
    int conta;
    float limiteAnterior, novoLimite, saldoAtual;

    for(int i = 1; i <= 3; i++) {
        printf("Digite o numero da conta: ");
        scanf("%d", &conta);
        printf("Digite o limite anterior: ");
        scanf("%f", &limiteAnterior);
        printf("Digite o saldo: ");
        scanf("%f", &saldoAtual);
        novoLimite = limiteAnterior / 2;
        printf("Seu novo limite e de: %.2f\n", novoLimite);

        if ( saldoAtual > novoLimite ) {
            printf("Seu saldo atual e maior que o novo limite!\n");
        }

        printf("\n");
    }
}
