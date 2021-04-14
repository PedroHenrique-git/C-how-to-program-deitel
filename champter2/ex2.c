#include<stdio.h>

int main ( void ) {
    int numeroDaConta;
    float saldoInicial, totalEncargos, totalCreditos, limiteDeCredito, novoSaldo;
	
	while(1) {
        printf("\nInforme o numero da conta(-1 para terminar): ");
        scanf("%d", &numeroDaConta);
        if(numeroDaConta == -1) break;
        printf("Informe o saldo inicial: ");
        scanf("%f", &saldoInicial);
        printf("Informe o total de encargos: ");
        scanf("%f", &totalEncargos);
        printf("Informe o total de creditos: ");
        scanf("%f", &totalCreditos);
        printf("Informe o limite de creditos: ");
        scanf("%f", &limiteDeCredito);
        printf("\n");
        novoSaldo = saldoInicial + totalEncargos - totalCreditos;
        if( novoSaldo > limiteDeCredito) {
            printf("Conta: %d", numeroDaConta);
            printf("\nLimite de credito: %f", limiteDeCredito);
            printf("\nSaldo: %f", novoSaldo);
            printf("\nLimite de creditos ultrapassado");
            printf("\n");
        }
    } 
}
