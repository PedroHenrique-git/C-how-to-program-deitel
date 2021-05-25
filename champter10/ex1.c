#include<stdio.h>
#include<stdlib.h>

struct listNode {
    char data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert( ListNodePtr *sPtr, char value );
char delete ( ListNodePtr *sPtr, char value );
int isEmpty ( ListNodePtr sPtr );
void printList ( ListNodePtr currentPtr );
void instructions ( void );

int main ( void ) {
    ListNodePtr startPtr = NULL;
    int choice;
    char item;

    instructions();
    printf("? ");
    scanf("%d", &choice);

    while( choice != 3) {
        switch ( choice ) {
            case 1:
                printf("Digite um caractere: ");
                scanf("\n%c", &item);
                insert(&startPtr, item);
                printList(startPtr);
            break;
            case 2:
                if( !isEmpty(startPtr)) {
                    printf("Digite caractere a ser exluido: ");
                    scanf("\n%c", &item);

                    if(delete(&startPtr, item)) {
                        printf("%c deleted.\n", item);
                        printList(startPtr);
                    } else {
                        printf("%c nao encontrado.\n\n", item);
                    }
                } else {
                    printf("Lista esta vazia.\n\n");
                }
            break;
            default:
                printf("Escolha invalida.\n\n");
                instructions();
            break;
        }
        printf("Fim da execucao.\n");
    }
}

void instructions( void ) {
    printf("Digite sua escolha:\n"
           "  1 para inserir um elemento na lista.\n"
           "  2 para excluir um elemento da lista.\n"
           "  3 para terminar.\n");
}

void insert(ListNodePtr *sPtr, char value) {
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;

    newPtr = malloc( sizeof(ListNode) );

    if( newPtr != NULL ) {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        previousPtr = NULL;
        currentPtr = *sPtr;

        while(currentPtr != NULL && value > currentPtr->data) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if(previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        } else {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    } else {
        printf("%c nao inserido. Sem memoria disponivel.\n", value);
    }
}

char delete( ListNodePtr *sPtr, char value) {
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;

    if(value == (*sPtr)->data) {
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return value;
    } else {
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;

        while(currentPtr != NULL && currentPtr->data != value) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if(currentPtr != NULL) {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
}

int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;
}

void printList(ListNodePtr currentPtr) {
    if(currentPtr == NULL) {
        printf("Lista esta vazia\n\n");
    } else {
        printf("A lista e:\n");
        while(currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}
