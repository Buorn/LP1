#include <stdio.h>

int main(void) {

    int a, b;
    int *p;
    printf("Digite um valor para a e outro para b: ");
    scanf("%d %d", &a, &b);


    if(a > b){
        p = &a;
    }else {
        p = &b;
    }
    *p = *p - 50;
    printf("%d %d ", a, b);

    return 0;
}
