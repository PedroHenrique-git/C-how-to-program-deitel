#include<stdio.h>

typedef struct ponto {
    float x;
    float y;
} Ponto;

Ponto retornaPontoMedio(Ponto pontoInicial, Ponto pontoFinal) {
    float xm = (pontoInicial.x + pontoFinal.x) / 2;
    float ym = (pontoInicial.y + pontoFinal.y) / 2;

    Ponto pontoMedio;

    pontoMedio.x = xm;
    pontoMedio.y = ym;
    
    return pontoMedio;
}

int main ( void ) {
    Ponto pontoInicial;
    Ponto pontoFinal;
    Ponto pontoMedio;

    pontoInicial.x = 2.0;
    pontoInicial.y = 1.0;

    pontoFinal.x = 7.0;
    pontoFinal.y = 6.0;

    pontoMedio = retornaPontoMedio(pontoInicial, pontoFinal);

    printf("ponto medio: ( %.2f, %.2f ) ", pontoMedio.x, pontoMedio.y);
}