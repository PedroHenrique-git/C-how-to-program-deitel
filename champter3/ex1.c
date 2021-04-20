#include<stdio.h>

int main ( void ) {
    char n;
    printf("%d", 'a');
    printf(" %c\n", 97);

    while ( (n = getchar()) != EOF ) {
        /*
        if ( n == 'a' || n == 'A') printf("Vogal A\n");
        if ( n == 'e' || n == 'E') printf("Vogal E\n");
        if ( n == 'i' || n == 'I') printf("Vogal I\n");
        if ( n == 'o' || n == 'O') printf("Vogal O\n");
        if ( n == 'u' || n == 'U') printf("Vogal U\n");
        */

        switch ( n ) {
            case 'A':
            case 'a':
                printf("Vogal A\n");
            break;

            case 'E':
            case 'e':
                printf("Vogal E\n");
            break;

            case 'I':
            case 'i':
                printf("Vogal I\n");
            break;

            case 'O':
            case 'o':
                printf("Vogal O\n");
            break;

            case 'U':
            case 'u':
                printf("Vogal U\n");
            break;

            case '\n':
            case '\t':
            case ' ':
            break;

            default:
                printf("Nao e uma vogal\n");
            break;
        }

    }

}
