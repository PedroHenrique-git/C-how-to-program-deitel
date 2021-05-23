#include<stdio.h>

struct clientData {
    int accNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

typedef struct clientData client;

int main ( void ) {
    int i;
    client blankCliente = { 0, "", "", 0.0 };

    FILE *cfPtr;

    if( ( cfPtr = fopen("credit.txt", "wb") ) == NULL ) {
        printf("Arquivo nao pode ser aberto\n");
    } else {
        for(i = 0; i < 100; i++) {
            fwrite(&blankCliente, sizeof( struct clientData ), 1, cfPtr);
        }
        fclose(cfPtr);
    }
}
