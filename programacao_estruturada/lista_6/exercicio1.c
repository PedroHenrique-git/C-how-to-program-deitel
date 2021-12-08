#include <stdio.h>

int myStrlen(char * string) {
    int i = 0;
    while(string[i] != '\0') i += 1;
    return i;
}

char * myStrcat(char * string1, char * string2) {
    int size = myStrlen(string1);
    int i = 0;

    while( string2[i] != '\0' ) {
        string1[size++] = string2[i];
        i += 1;
    }

    return string1;
}

char myToUpper(char chr) {
    if( chr >= 65 && chr <= 90 ) return chr;
    return chr - 32;
}

char myToLower(char chr) {
    if( chr >= 97 && chr <= 122 ) return chr;
    return chr + 32;
}

void myStrCpy(char * dest, char * origin) {
    *dest = *origin;
}

int myStrcmp(char * str1, char * str2) {
    int sizeStr1 = sizeof(str1);
    int sizeStr2 = sizeof(str2);
    if( sizeStr1 == sizeStr2 ) return 0;
    if( sizeStr1 < sizeStr2 ) return -1;
    if( sizeStr1 > sizeStr2 ) return 1;
}

int main ( void ) {
    char * str1 = (char *)(malloc(sizeof(char)));
    char * str2 = (char *)(malloc(sizeof(char)));
    str1 = "Pedro henrique";
    str2 = "Da silva";

    int tam = myStrlen(str1);

    printf("tamanho da string: %d\n", tam);
    printf("to upper: %c\n", myToUpper('a'));
    printf("to lower: %c\n", myToLower('A'));
    myStrCpy(str1, str2);
    printf("string 1: %s", str1);
    myStrcmp(str1, str2);
    printf("comparando as duas strings: %d", sizeof(str1));
    // printf("\nstring concatenada: %s\n", myStrcat(str1, str2));
}
