#include<stdio.h>

int main ( void ) {
    float altura, peso, imc;

    printf("Digite sua altura e seu peso: ");
    scanf("%f%f", &altura, &peso);

    imc = peso / (altura * altura);

    if(imc < 18.5) {
        printf("Abaixo do peso");
    } else if(imc <= 24.9) {
        printf("Normal");       
    } else if(imc <= 29.9) {
        printf("Acima do peso");    
    } else {
        printf("Obeso");    
    }
}