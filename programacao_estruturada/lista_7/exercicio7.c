#include<stdio.h>
#include "typesExer7.h"

typedef struct cadeira {
    Coluna coluna;
    Fileira fileira;
    Setor setor;
} Cadeira;

int main ( void ) {
    Cadeira * cadeira = (Cadeira *)(malloc(sizeof(Cadeira)));
}