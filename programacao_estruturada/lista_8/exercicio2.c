#include<stdio.h>

typedef struct TASCII {
    int codigo;
    char character;
} ASCII;

int main ( void ) {
    char * path = (char *)(malloc(sizeof(char)));
    FILE * file;
    FILE * duplicateFile;
    ASCII asciiTable;

    printf("Digite o caminho do arquivo: ");
    gets(path);

    if( ( file = fopen(path, "r") ) == NULL || ( duplicateFile = fopen("duplicata.txt", "w") ) == NULL) {
        printf("Nao foi possivel abrir o arquivo");
        exit(1);
    }

    rewind(file);

    while( 1 ) {
        fread(&asciiTable, sizeof(ASCII), 1, file);
        fwrite(&asciiTable, sizeof(ASCII), 1, duplicateFile);
        if(feof(file)) break;
    }

    fclose(file);
}