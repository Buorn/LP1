#include <stdio.h>

int main(void) {
	
	int m, n;
	int mat[m][n];
	
	printf("Digite o tamano da matriz mxn: ");
	scanf("%d %d", &m, &n);
	
	void escreveMatriz(int mat[m][n], int m, int n);
	void imprimeMatriz(int mat[m][n], int m, int n);
	
	
	imprimeMatriz(escreveMatriz, m,n);
	
	return 0;
}
	
	
void escreveMatriz(int mat[m][n], int m, int n) {
	int v;
	for (int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Digite o Elemento[%d][%d] \n", i, j);
			mat[i][j] = scanf("%d",&v);
			
		}
	}	
	
		
	
}	
	
