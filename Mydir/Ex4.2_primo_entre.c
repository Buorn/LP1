#include <stdio.h>

int main(void) {

	int n, i;
	int primo(int i);

	printf("Digite um valor: ");
	scanf("%d", &n);

    if(n == 1) {
        printf("%d", 1);
    }else{
        printf("%d ", 1);
        for(i = 2; i <= n; i++){
            if(primo(i) == 1){
                    printf("%d ", i);
            }
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
