#include<stdio.h>

int main ( void ) {
    float raio, diametro, circunferencia, area;
    const float PI = 3.141592; 

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2 * PI * raio;
    area = PI * (raio * raio);

    printf("\ndiametro: %f", diametro);
    printf("\ncircunferencia: %f", circunferencia);
    printf("\narea: %f", area);
}