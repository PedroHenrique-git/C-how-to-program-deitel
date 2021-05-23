#include<stdio.h>

struct clientData {
    int accNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int enterChoice( void );
void textFile( FILE *readPtr );
void updateRecord( FILE *fPtr );
void newRecord( FILE *fPtr );
void deleteRecord( FILE *fPtr );

int main ( void ) {
    FILE *cfPtr;
    int choice;

    if( ( cfPtr = fopen("credit.txt", "rb+") ) == NULL ) {
        printf("Arquivo nao pode ser aberto\n");
    } else {
        while( ( choice = enterChoice() ) != 5 ) {
            switch( choice ) {
                case 1:
                    textFile(cfPtr);
                break;
                case 2:
                    updateRecord(cfPtr);
                break;
                case 3:
                    newRecord(cfPtr);
                break;
                case 4:
                    deleteRecord(cfPtr);
                break;
                default:
                    printf("Escolha incorreta\n");
                break;
            }
        }
    }
}

void textFile(FILE *readPtr){
    FILE *writePtr;

    struct clientData client = { 0, "", "", 0.0 };

    if( (writePtr = fopen("accounts.txt", "w") ) == NULL ) {
        printf("Arquivo nao pode ser aberto\n");
    } else {
        rewind(readPtr);
        fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Conta", "Sobrenome", "Nome", "Saldo");

        while(!feof(readPtr)) {
            fread(&client, sizeof(struct clientData), 1, readPtr);

            if(client.accNum != 0) {
                fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.accNum, client.lastName, client.firstName, client.balance);
            }
        }

        fclose(writePtr);
    }
}

void updateRecord(FILE *fPtr) {
    int account;
    double transaction;

    struct clientData client = { 0, "", "", 0.0 };

    printf("Digite a conta que vai ser atualizada (1 - 100): ");
    scanf("%d", &account);

    fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.accNum == 0) {
        printf("Conta #%d nao possui informacoes.\n", account);
    } else {
        printf("%-6d%-16s%-11s%10.2f\n\n", client.accNum, client.lastName, client.firstName, client.balance);
        printf("Digite cobranca (+) ou pagamento (-): ");
        scanf("%lf", &transaction);
        client.balance += transaction;
        printf("%-6d%-16s%-11s%10.2f\n",
               client.accNum, client.lastName,
               client.firstName, client.balance);
        fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

void deleteRecord(FILE *fPtr){
    struct clientData client;
    struct clientData blankClient = { 0, "", "", 0 };

    int accountNum;

    printf("Digite o numero da conta a excluir (1 - 100): ");
    scanf("%d", &accountNum);

    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.accNum == 0) {
        printf("Conta %d nao existe.\n", accountNum);
    } else {
        fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
        fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
    }
}

void newRecord(FILE *fPtr) {
    struct clientData client = { 0, "", "", 0.0 };
    int accountNum;

    printf("Digite o novo numero da conta (1 -100): ");
    scanf("%d", &accountNum);

    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.accNum != 0) {
        printf("Conta #%d ja contem informacoes.\n");
    } else {
        printf("Digite sobrenome, nome, saldo\n?");
        scanf("%s%s%lf", &client.lastName, &client.firstName, &client.balance);

        client.accNum = accountNum;

        fseek(fPtr, (client.accNum - 1) * sizeof(struct clientData), SEEK_SET);
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

int enterChoice(void) {
    int menuChoice;

    printf("\nDigite sua escolha\n"
           "1 - armazena um arquivo de texto formatado de contas, chamado\n"
           "\accounts.txt\ para impressao\n"
           "2 - atualiza uma conta\n"
           "3 - inclui uma nova conta\n"
           "4 - exclui um conta\n"
           "5 - termina o programa\n?");
    scanf("%d", &menuChoice);
    return menuChoice;
}

