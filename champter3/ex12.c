#include<stdio.h>

int main ( void ) {
    float n = 3.0, pi;

    pi = 4.0 - ( 4.0 / n );
    printf("%f", pi);
    while(1) {
        printf("%f", pi);
        n += 2.0;
        pi += 4.0 / n;
        printf("\n\n");
    }
}
