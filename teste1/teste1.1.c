#include <stdio.h>

int main(void) {

    int num, soma;
    soma = 0;

    printf("Escolha um numero: ");
    scanf("%d", &num);

    while(num > 0) {
        soma = soma +num;
        num = (num - 1);
    }
        printf("somou %d \n", soma);
    
    return(0);
}
