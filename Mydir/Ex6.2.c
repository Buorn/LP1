#include <stdio.h>

int main(void) {

    int arr[4][2], i, c;
    void preenche(int arr[4][2], int i, int c);
    void media(int arr[4][2], int i, int c);
    preenche(arr, i, c);
    media(arr, i, c);

    return 0;
}

void preenche(int arr[4][2], int i, int c) {
    for(i = 0; i < 4; i++){
        for(c = 0; c < 2; c++){
            printf("\nDigite o Elemento [%d][%d]: ", i+1, c+1);
            scanf("%d", &arr[i][c]);
        }
    }
}

void media(int arr[4][2], int i, int c){
    float soma = 0;
    float media;
    for(i = 0; i < 4; i++){
        for(c = 0; c < 2; c++){
            soma = soma + arr[i][c];
        }
    }
    printf("Média = %f:\n",media = soma/(i*c));

}
