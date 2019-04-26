#include <stdio.h>

int main(void) {

    int m, n;

    printf("Digite o tamanho da matriz mxn: ");
    scanf("%d %d", &m, &n);

    printf("m: %d n: %d \n", m, n);

    int mat[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("\nDigite o Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("\n Elemento [%d][%d]: %d ", i+1, j+1, mat[i][j]);
        }
    }

    return 0;
}
