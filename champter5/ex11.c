#include<stdio.h>
#define FREQ 9

int main( void ) {
	int freq[FREQ] = { 0 };
	int totalEmVendas, salario;
	
	for(int i = 1; i <= 10; i++) {
		printf("Digite o total de vendas da semana: ");
		scanf("%d", &totalEmVendas);
		salario = (int) 200 + ( totalEmVendas * 0.09 );
		printf("\n");
		
		if( salario <= 299 )
			freq[0]++;
		else if ( salario <= 399 )
			freq[1]++;
		else if ( salario <= 499 )
			freq[2]++;
		else if ( salario <= 599 )
			freq[3]++;
		else if ( salario <= 699 )
			freq[4]++;
		else if ( salario <= 799 )
			freq[5]++;
		else if ( salario <= 899 )
			freq[6]++;
		else if ( salario <= 999 )
			freq[7]++;
		else
			freq[8]++;
	}
	
	printf("Valores entre 200–299: %d\n", freq[0]);
	printf("Valores entre 300–399: %d\n", freq[1]);
	printf("Valores entre 400–499: %d\n", freq[2]);
	printf("Valores entre 500–599: %d\n", freq[3]);
	printf("Valores entre 600–699: %d\n", freq[4]);
	printf("Valores entre 700–799: %d\n", freq[5]);
	printf("Valores entre 800–899: %d\n", freq[6]);
	printf("Valores entre 900–999: %d\n", freq[7]);
	printf("Valores maiores que 1000: %d\n", freq[8]);
}
