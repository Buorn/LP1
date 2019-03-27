#include <stdio.h>

float main(void)
{
	float n;
	
	printf("Digite o valor do celular em dolares: ");
	scanf("%f", &n);

	if (n >= 1000/3.17)
	{
		printf("Mau Negócio! \n");
	}
	else
	{
		printf("Bom Negócio! \n");
	}
	
	return(0);
}
