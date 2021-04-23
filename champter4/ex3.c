#include<stdio.h>
#include<stdlib.h>

int main ( void ) {
	int freq1 = 0;
	int freq2 = 0;
	int freq3 = 0;
	int freq4 = 0;
	int freq5 = 0;
	int freq6 = 0;
	int face;
	int i;
	
	for(i = 1; i <= 6000; i++) {
		face = 1 + ( rand() % 6 );
		
		switch(face) {
			case 1:
				freq1++;
			break;
			case 2:
				freq2++;
			break;
			case 3:
				freq3++;
			break;
			case 4:
				freq4++;
			break;
			case 5:
				freq5++;
			break;
			case 6:
				freq6++;
			break;
		}
	}
	
	printf("face 1: %d\n",freq1);
	printf("face 2: %d\n",freq2);
	printf("face 3: %d\n",freq3);
	printf("face 4: %d\n",freq4);
	printf("face 5: %d\n",freq5);
	printf("face 6: %d\n",freq6);
}
