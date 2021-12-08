#include<stdio.h>
#define TAM 5

int transformArray(int[], int);
void showArr(int[], int);

int main ( void ) {
    int vet[TAM];

    printf("\nDigite os elementos do vetor: \n");

    for(int i = 0; i < TAM; i++) {
        printf("\nelemento %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    transformArray(vet, TAM);
    showArr(vet, TAM);
}

int transformArray(int array[], int tam) {
    for(int i = 0; i < tam; i++) {
        array[i] = array[i] * i;
    }
}

void showArr(int array[], int tam) {
    printf("Elementos do array: \n");
    for(int i = 0; i < tam; i++) {
        printf("%d\n", array[i]);
    }    
}