#include <stdio.h>

int main(void) {
	
	int n;	
	int primo(int n);	

	printf("Digite um valor: ");
	scanf("%d", &n);

	primo(n);

	return 0;
}

int primo(int x) {
	
	int i;
	int cont = 0;

	for(i = 0; i < x; i++) {
		if (x % i == 0) {
			cont += 1;
		}
	}
	if(cont == 2) {
		printf("%d é primo", x);
	}else {
		printf("%d não é primo", x);
	}
}
		
