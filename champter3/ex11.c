#include<stdio.h>

int main ( void ) {
    int numero;
    float quantidadeVendida, valorRevenda;

    while(1) {
        printf("Numero do produto (-1 para parar a execucao): ");
        scanf("%d", &numero);
        if (numero == -1) break;
        printf("Quantidade vendida: ");
        scanf("%f", &quantidadeVendida);

        switch(numero) {
            case 1:
                valorRevenda = quantidadeVendida * 2.98;
                printf("Valor revenda: %.2f\n", valorRevenda);
            break;
            case 2:
                valorRevenda = quantidadeVendida * 4.50;
                printf("Valor revenda: %.2f\n", valorRevenda);
            break;
            case 3:
                valorRevenda = quantidadeVendida * 9.98;
                printf("Valor revenda: %.2f\n", valorRevenda);
            break;
            case 4:
                valorRevenda = quantidadeVendida * 4.49;
                printf("Valor revenda: %.2f\n", valorRevenda);
            break;
            case 5:
                valorRevenda = quantidadeVendida * 6.87;
                printf("Valor revenda: %.2f\n", valorRevenda);
            break;
            default:
                printf("Numero do produto não encontrado\n");
            break;
        }
    }
}
