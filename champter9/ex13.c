#include<stdio.h>

struct clientData {
    int accNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main ( void ) {
    FILE *cfPtr;

    struct clientData client = { 0, "", "", 0.0 };

    if( ( cfPtr = fopen("credit.txt", "rb+") ) == NULL ) {
        printf("Arquivo nao pode ser aberto");
    } else {
        printf("Digite numero da conta"
                "(1 a 100, 0 para encerrar entrada)\n?");
        scanf("%d", &client.accNum);

        while( client.accNum != 0 ) {
            printf("Digite sobrenome, nome e saldo\n?");
            fscanf(stdin, "%s%s%lf", client.lastName, client.firstName, &client.balance);
            fseek(cfPtr, ( client.accNum - 1 ) * sizeof(struct clientData), SEEK_SET);
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            printf("Entre com o numero da conta\n? ");
            scanf("%d", &client.accNum);
        }

        fclose(cfPtr);
    }
}
