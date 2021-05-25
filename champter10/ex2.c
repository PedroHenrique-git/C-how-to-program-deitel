#include<stdio.h>
#include<stdlib.h>

struct stackNode {
    int data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main ( void ) {
    StackNodePtr stackPtr = NULL;
    int choice;
    int value;

    instructions();
    printf("? ");

    scanf("%d", &choice);

    while(choice != 3) {
        switch( choice ) {
            case 1:
                printf("Digite um inteiro: ");
                scanf("%d", &value);
                push(&stackPtr, value);
                printStack( stackPtr );
            break;
            case 2:
                if(!isEmpty(stackPtr)) {
                    printf("O valor retirado e %d.\n", pop(&stackPtr));
                }
                printStack(stackPtr);
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
    printf("Digite escolha:\n"
            "1 para colocar um valor na pilha\n"
            "2 para retirar um valor da pilha\n"
            "3 para terminar programa\n");
}

void push(StackNodePtr *topPtr, int info) {
    StackNodePtr newPtr;

    newPtr = malloc(sizeof(StackNode));

    if(newPtr != NULL) {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    } else {
        printf("%d nao inserido. Nenhuma memeoria disponivel.\n", info);
    }
}

int pop(StackNodePtr *topPtr) {
    StackNodePtr tempPtr;
    int popValue;

    tempPtr = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);
    return popValue;
}

void printStack(StackNodePtr currentPtr) {
    if(currentPtr == NULL) {
        printf("A pilha esta vazia.\n\n");
    } else {
        printf("A pilha e:\n");

        while(currentPtr != NULL) {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        printf("NULL\n\n");
    }
}

int isEmpty(StackNodePtr topPtr) {
    return topPtr == NULL;
}
