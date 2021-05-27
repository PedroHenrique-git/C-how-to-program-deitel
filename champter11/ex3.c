#include<stdio.h>
#include<stdlib.h>

void print( void );

int main ( void ) {
    int resposta;

    atexit ( print );
    printf("1 - para terminar usando exir | 2 - para terminar programa normalmente");
    scanf("%d", &resposta);

    if ( resposta == 1) {
        printf("\nTerminando programa");
        exit(EXIT_SUCCESS);
    }

    printf("\nTerminando programa com funcao exit\n");
}

void print( void ) {
    printf("Executanto funcao de termino do programa");
}
