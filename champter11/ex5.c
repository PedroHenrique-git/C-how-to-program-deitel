#include<stdio.h>

int main ( void ) {
    FILE *filePtr;
    FILE *tempFilePtr;
    int c;
    char fileName[30];

    printf("Esse programa transforma tabulacoes em espacos, informe o arquivo a ser modificado: ");
    scanf("%29d", fileName);

    if ( ( filePtr = fopen(fileName, "r+") ) != NULL ) {
        if( ( tempFilePtr = tmpfile() ) != NULL ) {
            while( (c = getc(filePtr)) != EOF ) {
                putchar(c);
                putc(c == '\t' ? ' ' : c, tempFilePtr);
            }
            rewind(tempFilePtr);
            rewind(filePtr);
            printf("\n\nO arquivo apos a modificacao e:\n");

            while( (c = getc(tempFilePtr)) != EOF ) {
                putchar(c);
                putc(c, filePtr);
            }
        } else {
            printf("Impossivel abrir aquivo temporario\n");
        }
    } else {
        printf("Impossivel abrir arquivo %s\n", fileName);
    }
}
