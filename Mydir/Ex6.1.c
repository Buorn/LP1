#include <stdio.h>

int main(void) {

    int n, i;
    int preenche(int vec[],int n);
    void media(int vec[], int n);

    printf("Digite o Tamanho do Vetor: ");
    scanf("%d", &n);

    int vec[n];
    preenche(vec, n);

    printf("Vetor: ");
    for(i = 0; i < n; i++) {
            printf("%d ", vec[i]);
    }
    media(vec, n);

    return 0;
}

int preenche(int v[],int n){

    int i;
    for(i = 0; i < n; i++) {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
}

void media(int v[], int n){

    int i;
    float soma, media;
    for(i = 0; i < n; i++) {
            soma += v[i];
    }
    media = soma/n;

    printf("\nMedia = %.2f", media);
}


