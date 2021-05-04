#include<stdio.h>
#include<ctype.h>

void convertToUpperCase(char *sPtr) {
	while(*sPtr != '\0') {
		if(islower(*sPtr)){
			*sPtr = toupper(*sPtr);
		}
		++sPtr;
	}
}

void showArr(int *arr, int tam) {
	for(int i = 0; i < tam; i++) {
		printf("\n%d\n", *(arr + i));
	}
}

int main ( void ) {
	char string[] = "caracteres, 10.5 10";
	int arr[] = { 1, 2, 3, 4, 5 };
	
	printf("A string antes da conversao: %s", string);
	convertToUpperCase(string);
	printf("\nA string depois da conversao: %s", string);
	
	showArr(arr, 5);
}
