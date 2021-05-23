#include<stdio.h>

int main ( void ) {
    int request;
    int account;
    double balance;
    char name[30];
    FILE *cfPtr;

    if( (cfPtr = fopen("clientes.txt", "r") ) == NULL ) {
        printf("Arquivo nao pode ser aberto\n");
    } else {
        printf("Digite solicitacao\n"
               " 1 - Lista contas com saldo zero\n"
               " 2 - Lista contas com saldo credor\n"
               " 3 - Lista contas com saldo devedor\n"
               " 4 - Fim da execucao\n? ");
        scanf("%d", &request);

        while( request != 4 ) {
            fscanf(cfPtr, "%d%s%lf", &account, name, &balance);

            switch( request ) {
                case 1:
                    printf("\nContas com saldo zero:\n");

                    while( !feof( cfPtr ) ) {
                        if( balance == 0 ) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
                    }
                break;
                case 2:
                    printf("\nContas com saldo credor:\n");

                    while( !feof( cfPtr ) ) {
                        if( balance < 0 ) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
                    }
                break;
                case 3:
                    printf("\nContas com saldo devedor:\n");

                    while( !feof( cfPtr ) ) {
                        if( balance > 0 ) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
                    }
                break;
            }

            printf("\n? ");
            scanf("%d", &request);
        }

        printf("Fim da execucao\n");
        fclose(cfPtr);
    }
}
