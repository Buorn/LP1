#include <stdio.h>

int main(void) {

    int x, y, i;

    printf("Escolha o primeiro numero: ");
    scanf("%d", &x);

    printf("Escolha o segundo numero: ");
    scanf("%d", &y);

    if (y > x) {    
        for(i = y; i > 0; i--) {
            if(i > x && i < y && i % 2 == 0) {
                printf("%d \n", i);
            }
        }
    }
    else {
        for(i = x; i > 0; i--) {
            if(i > y && i < x && i%2 == 0) {
                printf("%d \n", i);
            }
        }
    }
    return(0);
}
