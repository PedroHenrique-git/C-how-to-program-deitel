#include<stdio.h>

int main ( void ) {
    int c1, c2, sum, hp;
    for(int i = 1; i <= 500; i++) {
        c1 = i * i;
        for(int j = 1; j <= 500; j++) {
            c2 = j * j;
            for(int k = 1; k <= 500; k++) {
                hp = k * k;
                sum = c1 + c2;
                if(sum == hp) printf("%d + %d = %d\n", c1, c2, hp);
            }
        }
    }
}
