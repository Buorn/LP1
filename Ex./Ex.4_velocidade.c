#include <stdio.h>

float main(void)
{

	float v;

	printf("Digite a velocidade em mph: ");
	scanf("%f", &v);

	if ( v >= 80/1.6 && v <= 100/1.6)
	{
		printf("Mantenha! \n");
	}
	else if (v < 80/1.6)
	{
		printf("Acelere! \n");
	}
	else
	{
		printf("Desacelere! \n");
	}
	
	return(0);
}

