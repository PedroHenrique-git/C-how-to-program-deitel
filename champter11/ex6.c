#include<stdio.h>

int main ( void ) {
    int contador = 1;

    start:
        if( contador > 10) {
            goto end;
        }

        printf("%d", contador);
        contador++;

        goto start;
    end:
            putchar('\n');
}
