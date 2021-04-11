#include <stdio.h>

int main ( void ) {
    int num1, num2, num3, maior, menor;
    printf("Digite tres numeros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    if(num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num1 && num2 < num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    printf("\nA soma e: %d", num1 + num2 + num3);
    printf("\nA media e: %d", (num1 + num2 + num3) / 3);
    printf("\nO produto e: %d", num1 * num2 * num3);
    printf("\nMenor: %d", menor);
    printf("\nMaior: %d", maior);
}