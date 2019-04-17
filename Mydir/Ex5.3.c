#include <stdio.h>

int main(void) {

    int a, b, i;
    int compras [] = {100, 50, 80, 30, 20};
    
    printf("Digite o Saldo da Conta 1: ");
    scanf("%d", &a);
    
    printf("Digite o Saldo da Conta 2: ");
    scanf("%d", &b);

    for(i = 0; i < 5; i++) {
        if(a > b) {
            a = a - compras[i];
        }else {
            b = b - compras[i];
        }
        printf("Saldo da Conta 1: %d \n", a);
        printf("Saldo da Conta 2: %d \n", b);
    }
   return 0; 
}
