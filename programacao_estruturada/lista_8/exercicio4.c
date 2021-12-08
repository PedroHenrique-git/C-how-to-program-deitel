#include<stdio.h>
#include<stdlib.h>

typedef struct TASCII {
    int codigo;
    char character;
} ASCII;

int main ( void ) {
    FILE * inputFile;
    char path[] = "E:\/www\/programacao_estruturada\/lista_8\/dados.txt";
    int resgitersQuantity = 0;
    ASCII ascii;

    if( ( inputFile = fopen(path, "r") ) == NULL ) {
        printf("Arquivo nao pode ser aberto");
        exit(1);
    }
    
    rewind(inputFile);

    while(fread(&ascii, sizeof(ASCII), 1, inputFile)) {
        resgitersQuantity += 1;
    }

    printf("Quantidade de registros no arquivo: %d", resgitersQuantity);

    fclose(inputFile);
}