#include<stdio.h>

int main ( void ) {
    int tipo, horasTrabalhadas, qtdItensProduzidos;
    float salario, vendasSemanais;

    while(1) {
        printf("Digite o codigo do empregado (-1 para terminar o programa): ");
        scanf("%d", &tipo);
        if (tipo == -1) break;

        switch(tipo) {
            case 1:
                printf("Gerente, salario fixo de R$ 9000.00\n");
            break;
            case 2:
                printf("Digite a quantidade de horas trabalhadas: ");
                scanf("%d", &horasTrabalhadas);
                if ( horasTrabalhadas > 40 ) {
                    salario = 5.00 * 1.5 * horasTrabalhadas;
                } else {
                    salario = 5.00 * horasTrabalhadas;
                }
                printf("Seu salario e de: R$%.1f\n", salario);
            break;
            case 3:
                printf("Digite o valor das vendas semanais: ");
                scanf("%f", &vendasSemanais);
                salario = 250 + ( vendasSemanais * ( 5.7 / 100 ) );
                printf("Seu salario e de: R$%.1f\n", salario);
            break;
            case 4:
                printf("Digite a quantidade de itens produzidos: ");
                scanf("%d", &qtdItensProduzidos);
                salario =  10.00 * qtdItensProduzidos;
                printf("Seu salario e de: R$%.1f\n", salario);
            break;
            default:
                printf("Codigo de funcionario nao encontrado.\n");
            break;
        }
    }
}
