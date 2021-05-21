#include<stdio.h>

enum months {
	JAN = 1,
	FEV,
	MAR,
	ABR,
	MAI,
	JUN,
	JUL,
	AGO,
	SET,
	OUT,
	NOV,
	DEZ
};

typedef enum months MON;

int main ( void ) {
	MON month;
	
	const char *monthName[] = {
		"", "Janeiro", "Fevereito", "Março",
		"Abril", "Maio", "Junho",
		"Julho", "Agosto", "Setembro",
		"Outubro", "Novembro", "Dezembro"
	};
	
	for(month = JAN; month <= DEZ; month++) {
		printf("%2d%11s", month, monthName[month]);
	}
}
