#include <stdio.h>


int main(void) {

	char time[4][15];
	int e[4], v[4], d[4], s[4], i, j, z, m, p;
	j=0;
	z=100;	
	
	for(i = 0; i <= 3; i++) {
		printf("Digite o nome do time: ");
		scanf("%s", &time[i]);
		
		printf("Digite o número de vitórias: ");
		scanf("%d", &v[i]);
		
		printf("Digite o número de derrotas: ");
		scanf("%d", &d[i]);

		printf("Digite o número de empates: ");
		scanf("%d", &e[i]);
		
		s[i] = v[i]*3 + e[i];
	}
	for(i = 0; i <=3; i++) {
		if (j < s[i]) {
			j = s[i];
			m = i;
		}
		if (z > s[i]) {
			z = s[i];
			p = i;		
		}
	}
	printf("O time com mais ponto é o %s com %d pontos \n", time[m], j);
	printf("O time com menos ponto é o %s com %d pontos \n", time[p], z);
			
	return(0);
}		
	
