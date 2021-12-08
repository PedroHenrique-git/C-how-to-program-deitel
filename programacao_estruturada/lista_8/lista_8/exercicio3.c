#include<stdio.h>
#include<stdlib.h>
#define TAM 256
//E:\www\programacao_estruturada\lista_8\dados.txt

typedef struct TAscii {
    int codigo;
    char character;
} ASCII;

int main ( void ) {
    FILE * arquivo;
    ASCII ascii;
    int codigo;
    char character;

    if( ( arquivo = fopen("dados.txt", "a+" ) ) == NULL ) {
        printf("Nao foi possivel abrir o arquivo");
        remove(arquivo);
        exit(EXIT_FAILURE);
    }
    

    for(int i = 0;  i < TAM; i += 1) {
        ascii.codigo = i;
        ascii.character = i;
        fprintf(arquivo, "%d\t%c\n", ascii.codigo, ascii.character);    
    }

    rewind(arquivo); 

    char string[100];
    
    while( fscanf(arquivo, "%s", string ) == 1 ) {
        printf("%s\n", string);
    }

    fclose(arquivo); 
}