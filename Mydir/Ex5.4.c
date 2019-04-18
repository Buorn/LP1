#include <stdio.h>

int main(void){

    int x = 10, y = 20;
    int *p1 = &x, *p2 = &y;
    int troca(int *p1, int *p2);

    printf("X: %d Y: %d \n", x, y);

    troca(p1, p2);

    printf("X: %d Y: %d \n", x, y);
    return 0;
}

int troca(int *x, int *y) {

    int t;

    t = *x;
    *x = *y;
    *y = t;

}
