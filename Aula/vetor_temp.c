#include <stdio.h>

int main (void) {
    int temps[5], i, soma, med, cont;
    soma = 0;
    cont = 0;
    for( i = 0 ; i <= 4; i++) {    
        printf("Insira uma temperatura %d: ", i+1);
        scanf("%d", &temps[i]);
        soma = soma + temps[i];       
    }
    med = soma/5;
    printf("média é %d \n", med);
    
    for( i = 0; i <= 4; i++) {
        if (temps[i] > med) {
            cont = cont + 1;
        }
    }
    printf("%d números estão acima da média \n", cont);
}
