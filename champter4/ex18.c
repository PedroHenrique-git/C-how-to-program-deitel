#include<stdio.h>

int qualityPoints(float media) {
	if( media >= 90 ) {
		return 4;
	} else if( media >= 80 ) {
		return 3;
	} else if( media >= 70 ) {
		return 2;
	} else {
		return 0;
	}
}

int main ( void ) {
	float media;
	printf("Digite a sua media: ");
	scanf("%f", &media);
	printf("\nQualidade dos ponto: %d", qualityPoints(media));	
}
