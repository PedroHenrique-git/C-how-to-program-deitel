#include<stdio.h>

int main ( void ) {
    int numeroDeHoras;
    float salario, salarioFinal;

    while(1) {
        printf("\nDigite o total de horas trabalhadas (-1 para finalizar o programa): ");
        scanf("%d", &numeroDeHoras);
        if(numeroDeHoras == -1) break;
        printf("Digite o salario por hora do funcionario: ");
        scanf("%f", &salario);

        if(numeroDeHoras > 40) {
            salarioFinal = salario * numeroDeHoras + 5;
        } else {
            salarioFinal = salario * numeroDeHoras;
        }

        printf("salario e de: %f", salarioFinal);
        printf("\n");
    }
}
