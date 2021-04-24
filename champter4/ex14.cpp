#include<stdio.h>
#include<math.h>

int quantidadeSegundos(int hora, int minuto, int segundo) {
	int horaSegundos = hora * 60 * 60;
	int minutosSegundos = minuto * 60;
	return horaSegundos + minutosSegundos + segundo; 	
}

int main ( void ) {
	printf("Total segundos: %d", quantidadeSegundos(13,40,10));	
}
