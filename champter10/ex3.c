#include<stdio.h>
#include<stdlib.h>

struct queueNode {
    char data;
    struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions(void);

int main ( void ) {
    QueueNodePtr headPtr = NULL;
    QueueNodePtr tailPtr = NULL;
    int choice;
    char item;

    instructions();
    printf("? ");
    scanf("%d", &choice);

    while(choice != 3) {
        switch(choice) {
            case 1:
                printf("Digite um caractere: ");
                scanf("\n%c", &item);
                enqueue(&headPtr, &tailPtr, item);
                printQueue(headPtr);
            break;
            case 2:
                if(!isEmpty(headPtr)) {
                    item = dequeue(&headPtr, &tailPtr);
                    printf("%c saiu da fila.\n", item);
                }
                printQueue(headPtr);
            break;
            default:
                printf("Escolha invalida.\n\n");
                instructions();
            break;
        }
        printf("? ");
        scanf("%d", &choice);
    }
    printf("Fim da execucao.\n");
}

void instructions( void ) {
    printf("Digite sua escolha:\n"
           " 1 para incluir um item na fila\n"
           " 2 para remover um item da fila\n"
           " 3 para encerrar\n");
}

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value) {
    QueueNodePtr newPtr;

    newPtr = malloc(sizeof(QueueNode));

    if(newPtr != NULL) {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        if(isEmpty(*headPtr)) {
            *headPtr = newPtr;
        } else {
            (*tailPtr)->nextPtr = newPtr;
        }

        *tailPtr = newPtr;
    } else {
        printf("%c nao inserido. Nao ha memoria disponivel.\n", value);
    }
}

char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr) {
    char value;
    QueueNodePtr tempPtr;

    value = (*headPtr)->data;
    tempPtr = *headPtr;
    *headPtr = (*headPtr)->nextPtr;

    if(*headPtr == NULL) {
        *tailPtr = NULL;
    }

    free(tempPtr);
    return value;
}

int isEmpty(QueueNodePtr headPtr) {
    return headPtr == NULL;
}

void printQueue(QueueNodePtr currentPtr) {
    if(currentPtr == NULL) {
        printf("A fila esta vazia.\n\n");
    } else {
        printf("A fila e:\n");

        while(currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        printf("NULL\n\n");
    }
}
