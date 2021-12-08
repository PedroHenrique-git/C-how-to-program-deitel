#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int maxValor(int*, int);

int main ( void ) {
    int *arr = (int *)(malloc(sizeof(int)));

    printf("\nDigite os elementos do vetor: \n");

    for(int i = 0; i < TAM; i++) {
        printf("elemento %d do vetor: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nO maior valor do vetor e: %d", maxValor(arr, TAM));
}

int maxValor(int * vet, int tam) {
    int max = vet[0];
    for(int i = 0; i < tam; i++) {
        if( vet[i] > max ) {
            max = vet[i];
        }
    }
    return max;
}