#include<stdio.h>

union numero {
	int x;
	double y;
};

int main ( void ) {
	union numero x;
	
	x.x = 10;
	x.y = 10.50;
	
	printf("%d %lf", x.x, x.y);
}
