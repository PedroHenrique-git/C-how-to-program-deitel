#include<stdio.h>

int main ( void ) {
    float qtdLitros, qtdKml, consumoAtual, consumoTotal, totalKml;

    while(1) {
        printf("\n\nInforme quantos litros voce abasteceu (-1 para terminar a execucao): ");
        scanf("%f", &qtdLitros);
        if( qtdLitros == -1 ) break;
        printf("Informe quantos quilometros voce dirigiu: ");
        scanf("%f", &qtdKml);
        consumoAtual = qtdKml / qtdLitros;  
        consumoTotal += qtdLitros;
        totalKml += qtdKml; 
        printf("Consumo atual: %f", consumoAtual);
        printf("\n");
    }
    printf("\nO consumo geral foi de: %f", totalKml / consumoTotal);

}
