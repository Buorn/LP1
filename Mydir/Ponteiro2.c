#include <stdio.h>

int main (void) {

	int x = 10;
	double y = 20.50;
	char z = 'a';

	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;

	printf("Endereço x = %i - Valor x = %i", pX, *pX);
	printf("Endereço x = %i - Valor x = %f", pY, *pY);	
	printf("Endereço x = %i - Valor x = %c", pZ, *pZ);

	return 0;
}
