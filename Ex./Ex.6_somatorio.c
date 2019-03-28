#include <stdio.h>

int main(void) {

	int i, s, n;
	s = 0;
	
	printf("Digite o Valor de n: ");
	scanf("%d", &n);
	for(i = 0; i <= n; i++) {
		s = s + i*i;
	}
	printf("O somatório é %d \n", s);	
	return(0);
}
