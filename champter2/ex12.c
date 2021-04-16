#include<stdio.h>

int main ( void ) {
    int n = 1;

    while ( n <= 300000000 ) {
        if ( n % 100000000 == 0 ) printf("%d ", n);
        n += 1;
    }
}
