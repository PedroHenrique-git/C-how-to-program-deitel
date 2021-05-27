#include<stdio.h>

int main ( int argc, char *argv[] ) {
    FILE *inFilePtr;
    FILE *outFilePtr;
    int c;

    if( argc != 3) {
        printf("Uso: mycopy arquivo-entrada arquivo-saida\n");
    } else {
        if ( ( inFilePtr = fopen(argv[1], "r") ) != NULL ) {
            if( ( outFilePtr = fopen(argv[2], "w") ) != NULL ) {
                while ( ( c = fgetc(inFilePtr) != EOF ) ) {
                    fputc(c, outFilePtr);
                }
            }  else {
                printf("Arquivo \"%s\" nao pode ser aberto\n", argv[2]);
            }
        } else {
            printf("Arquivo \"%s\" nao pode ser aberto\n", argv[1]);
        }
    }
}
