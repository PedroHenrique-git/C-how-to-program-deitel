#include<stdio.h>

int main ( void ) {
    for(int i = 0; i < 256; i++) {
        printf("%c\t", i);
        if(i % 5 == 0) printf("\n");
    }
}