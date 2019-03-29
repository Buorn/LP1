#include <stdio.h>

int main(void) {

    char v[5];
    int i, soma, cont;  
    float med;
    soma = 0;
    cont = 0;   

    for(i = 0; i <= 4; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%hhd", &v[i]);

        soma = soma + v[i];
    }
    med = soma/5;
    
    for(i = 0; i <= 4; i++) {
        if(med < v[i]) {
            cont = cont + 1;
        }
    }
    printf("Media: %f \n", med);
    printf("Acima da Media: %d \n", cont);
    
    return(0);
}
