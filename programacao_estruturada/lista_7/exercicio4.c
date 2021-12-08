#include<stdio.h>

typedef struct tr2
{
    float x;
    float y;    
} CordR2;


int main ( void ) {
    CordR2 coordenada;

    printf("Digite a coordenada x: ");
    scanf("%f", &coordenada.x);

    printf("Digite a coordenada y: ");
    scanf("%f", &coordenada.y);

    printf("\nO ponto digitado foi (%.2f, %.2f)", coordenada.x, coordenada.y);
}