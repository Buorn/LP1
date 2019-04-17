#include <stdio.h>

int main(void) {

	int n;
	int primo(int n);

	printf("Digite um valor: ");
	scanf("%d", &n);

    if(n == 1) {
        printf("%d é primo", 1);
    }else{
        if(primo(n) == 1){
            printf("%d é primo ", n);
        }else {
            printf("%d não é primo", n);
        }
    }

	return 0;
}

int primo(int x) {

	int i;
	int cont = 0;

	for(i = 1; i <= x; i++) {
		if (x % i == 0) {
			cont += 1;
		}
	}
	if(cont == 2) {
		return 1;
	}else {
		return 0;
	}
}
