#include<stdio.h>

struct clientData {
    int accNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main ( void ) {
    FILE *cfPtr;

    struct clientData client = { 0, "", "", 0.0};

    if(( cfPtr = fopen("credit.txt", "rb")) == NULL) {
        printf("Arquivo nao pode ser aberto\n");
    } else {
        printf("%-6s%-16s%-11s%10s\n", "Conta", "Sobrenome", "Nome", "Saldo");

        while(!feof(cfPtr)) {
            fread(&client, sizeof(struct clientData), 1, cfPtr);

            if(client.accNum != 0) {
                printf("%-6d%-16s%-11s%10.2f\n",
                       client.accNum, client.lastName,
                       client.firstName, client.balance);
            }
        }

        fclose(cfPtr);
    }
}
