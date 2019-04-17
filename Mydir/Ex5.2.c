#include <stdio.h>

int main(void) {

    int a, b;
    int valor = 500;
    int *p;
    void compra(int *p, int valor);
   
    printf("Digite um valor para a e outro para b: ");
    scanf("%d %d", &a, &b);


    if(a > b){
        p = &a;
    }else {
        p = &b;
    }
    compra(p, valor);
    
    printf("Saldo 1: %d \n", a);
    printf("Saldo 1: %d \n", a);
    return 0;
}

void compra(int *conta, int valor) {
 
    *conta = *conta - valor;
    
}
