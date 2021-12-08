#include<stdio.h>
#include<stdlib.h>
#define TAM 5

void ascArray(int *, int);

int main ( void ) {
    int *vet = (int *)(malloc(sizeof(int)));

    printf("\nDigite os elementos do array: \n");

    for(int i = 0; i < TAM; i++) {
        printf("elemento %d do arry: ", i);
        scanf("%d", &vet[i]);
    }

    ascArray(vet, TAM);

    printf("\nElementos do array: \n");
    for(int i = 0; i < TAM; i++) {
        printf("%d\n", vet[i]);
    }
}

void ascArray(int *vet, int tam) {
    for(int i = 0; i < tam; i++) {
        if( vet[i] > vet[i + 1] ) {
            int aux = vet[i];
            vet[i] = vet[i + 1]; 
            vet[i + 1] = aux;
        }
    }
}