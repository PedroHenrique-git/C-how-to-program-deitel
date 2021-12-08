#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int * reverse(int[], int);
void showArray(int[], int);

int main ( void ) {
    int vet[TAM];

    printf("Digite os itens do vetor: \n");
    
    for(int i = 0; i < TAM; i++) {
        printf("Digite o elmento %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    int *reversed = reverse(vet, TAM);
    showArray(reversed, TAM);
}

int * reverse(int vet[], int tam) {
    int * reversedArray = (int *)(malloc(sizeof(int)));
    int index = 0;
    for(int i = tam - 1; i >= 0; i--) {
        reversedArray[index] = vet[i];
        index++; 
    }
    return reversedArray;
}

void showArray(int vet[], int tam) {
    printf("\nElementos do array: \n");
    for(int i = 0; i < tam; i++) {
        printf("%d\n", vet[i]);
    }
}