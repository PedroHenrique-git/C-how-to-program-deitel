#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

char *sorteiaArtigo(char *artigos[]) {
	return artigos[ (rand() % 6) ];
}

char *sorteiaSubstantivos(char *substantivos[]) {
	return substantivos[ (rand() % 5) ];
}

char *sorteiaVerbos(char *verbos[]) {
	return verbos[ (rand() % 4) ];
}

char *sorteiaPreposicoes(char *preposicoes[]) {
	return preposicoes[ (rand() % 5) ];
}

int main ( void ) {
	srand(time(NULL));
	
	char *artigos[6] = {"o", "a", "um", "uma", "algum", "alguma"};
	char *substantivos[5] = {"menino", "menina", "cao", "cidade", "carro"};
	char *verbos[4] = {"dirigiu", "saltou", "correu", "caminhou"};
	char *preposicoes[5] = {"para", "de", "sobre", "sob", "em"};
	
	for(int i = 0; i < 20; i++) {
		printf("%s", sorteiaArtigo(artigos));
		printf(" %s", sorteiaSubstantivos(substantivos));
		printf(" %s", sorteiaVerbos(verbos));
		printf(" %s", sorteiaPreposicoes(preposicoes));
		printf(" %s", sorteiaArtigo(artigos));
		printf(" %s.", sorteiaSubstantivos(substantivos));
		printf("\n");
	}
}
