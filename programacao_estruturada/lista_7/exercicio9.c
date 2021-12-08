#include <stdio.h>

typedef struct numeroRacional {
    float n;
    float d;
} NumeroRacional;

NumeroRacional soma(NumeroRacional numero1, NumeroRacional numero2) {
    NumeroRacional resultado;
    resultado.n = (numero1.n * numero2.d + numero2.n * numero1.d);
    resultado.d = (numero1.d * numero2.d);
    return resultado;

}

NumeroRacional subtracao(NumeroRacional numero1, NumeroRacional numero2) {
    NumeroRacional resultado;
    resultado.n = (numero1.n * numero2.d - numero2.n * numero1.d);
    resultado.d = (numero1.d * numero2.d);
    return resultado;

}

NumeroRacional multiplicacao(NumeroRacional numero1, NumeroRacional numero2) {
    NumeroRacional resultado;
    resultado.n = (numero1.n * numero2.n);
    resultado.d = (numero1.d * numero2.d);
    return resultado;

}

NumeroRacional divisao(NumeroRacional numero1, NumeroRacional numero2) {
    NumeroRacional resultado;
    resultado.n = (numero1.n * numero2.n);
    resultado.d = (numero1.d * numero2.d);
    return resultado;

}

int main ( void ) {
    NumeroRacional num1;
    NumeroRacional num2;

    NumeroRacional sum;
    NumeroRacional sub;
    NumeroRacional mult;
    NumeroRacional div;

    num1.n = 1.0;
    num1.d = 2.0;

    num2.n = 3.0;
    num2.d = 6.0;

    sum = soma(num1, num2);
    sub = subtracao(num1, num2);
    mult = multiplicacao(num1, num2);
    div = divisao(num1, num2);

    printf("soma: %.2f / %.2f\n", sum.n, sum.d);
    printf("subtracao: %.2f / %.2f\n", sub.n, sub.d);
    printf("multiplicacao: %.2f / %.2f\n", mult.n, mult.d);
    printf("divisao: %.2f / %.2f", div.n, div.d);

}