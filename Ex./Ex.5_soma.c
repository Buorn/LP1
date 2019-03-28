#include <stdio.h>

int main(void) {

	int c = 1;
	int s = 0;
	int n;

	while( c != 0) {
		printf("Digite um valor: ");
		scanf("%d", &n);
		s=s+n;
		c = n;
	}
	printf("A soma é: %d \n", s);
	return(0);
}	

		
