#include <stdio.h>

int main (void) {

	int x;
	x = 10;

	int *ponteiro; 
	ponteiro = &x; // ponteiro recebe o endereço do espaço de memória reservado para x

	printf("%i\n", *ponteiro); // imprime o valor do x

	return 0;
}
