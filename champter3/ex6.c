#include<stdio.h>

int main ( void ) {
    int mult = 1;
    for(int i = 1; i <= 15; i += 2) {
        mult *= i;
    }
    printf("%d", mult);
}
