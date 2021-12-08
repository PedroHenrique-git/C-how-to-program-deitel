#include<stdio.h>

typedef enum sexo {
    masculino,
    feminino
} Sexo;

typedef enum estadoCivil {
    solteiro,
    casado,
    viuvo,
    separado,
    desquitado
} EstadoCivil;

int main ( void ) {
    EstadoCivil estadoCivil;
    Sexo sexo;

    printf("Digite seu estado civil, seguido do seu sexo: ");
    scanf("%d%d", &estadoCivil, &sexo);

    printf("\nSeu estado civil e: %d, seu sexo e: %d", estadoCivil, sexo);   
}