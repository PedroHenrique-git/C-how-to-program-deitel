#include<stdio.h>

int fat(int n) {
    int f = 1;
    for(int i = n; i >= 1; i--) {
        f *= i;
    }
    return f;
}

int main ( void ) {
    for( int i = 1; i <= 5; i++ ) {
        printf("\nFatorial de %d: %d", i, fat(i));
    }
}
