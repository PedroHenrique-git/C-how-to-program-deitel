#include<stdio.h>

int main ( void ) {
    int sum;
    for(int i = 2; i <= 30; i+= 2) {
        sum += i;
    }
    printf("soma: %d", sum);
}
