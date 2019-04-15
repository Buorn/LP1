#include <stdio.h>

int main (void) {

	int x = 10;
	int *ponteiro;
 	ponteiro = &x; // ponteiro recebe o endereço do espaço de memória reservado para x

	int y = 20;
	*ponteiro = y; // substitui o valor de x pelo valor de y
		
	printf("%i %i \n", x, y);

	return 0;
}
