#include<stdio.h>
#include<math.h>

double hipotenusa(double cateto1, double cateto2) {
	return sqrt( pow(cateto1,2) + pow(cateto2,2) ); 
}

int main ( void  ) {
	printf("Triangulo 1: %.2f\n", hipotenusa(3.0, 4.0));
	printf("Triangulo 2: %.2f\n", hipotenusa(5.0, 12.0));
	printf("Triangulo 3: %.2f\n", hipotenusa(8.0, 15.0));
}
