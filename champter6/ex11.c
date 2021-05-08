#include<stdio.h>
#define PI 3.1415

double recebeRaio(){
	double raio;
	printf("Digite o raio de um circulo qualquer: ");
	scanf("%lf", &raio);
	return raio;
}

void circunferencia() {
	double raio = recebeRaio(); 
	printf("comprimento da circunferencia: %.5f\n", 2 * PI * raio);
}

void area() {
	double raio = recebeRaio();
	printf("area da circulo: %.5f\n", PI * (raio * raio));
}

void volume() {
	double raio = recebeRaio();
	double volume = ( 4 * PI * (raio * raio * raio) ) / 3; 
	printf("volume da esfera: %.5f\n", volume);
}

int main ( void ){
	int escolha = 0;
	
	void(*f[3])(void) = { circunferencia, area, volume };
	
	printf("Escolha uma opcao entre 0 e 2, 3 para finalizar: ");
	scanf("%d", &escolha);
	
	while(escolha >= 0 && escolha < 3){
		(*f[escolha])();
		
		printf("Escolha uma opcao entre 0 e 2, 3 para finalizar: ");
		scanf("%d", &escolha);
	}
}
