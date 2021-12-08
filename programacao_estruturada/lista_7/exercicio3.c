#include<stdio.h>

typedef struct tabuleiro {
    enum TLinha {
        l1 = 1,
        l2,
        l3,
        l4,
        l5,
        l6,
        l7,
        l8
    } linha;
    enum TColuna {
        c1 = 'A',
        c2 = 'B',
        c3 = 'C',
        c4 = 'D',
        c5 = 'E',
        c6 = 'F',
        c7 = 'G',
        c8 = 'H'
    } coluna
} Tabuleiro;

int main ( void ) {
    Tabuleiro tab;

    printf("Digite a linha e a coluna do tabuleiro: ");
    scanf("%d%d", &tab.linha, &tab.coluna);

    printf("\nA coordenada digitado e: (%d, %d)", tab.linha, tab.coluna);
}