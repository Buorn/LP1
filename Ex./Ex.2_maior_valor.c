#include <stdio.h>

int main(void) 
{
	int a, b;
	
	printf("Digite o primeiro Valor: ");
	scanf("%d", &a);

	printf("Digite o segundo Valor: ");
	scanf("%d", &b);

	if (a > b)
	{
		printf("O maior Valor é %d \n", a);
	}
	else
	{
		printf("O maior Valor é %d \n", b);
	}

	return(0);
}
