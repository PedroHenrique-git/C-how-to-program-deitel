#include<stdio.h>

int main ( void ) {
    int n, sum, qtd = 0;
    while(1) {
        scanf("%d ", &n);
        if ( n == 9999 ) break;
        sum += n;
        qtd++;
    }
    printf("\nMedia: %d", sum / qtd);
}
