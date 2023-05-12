//TP4 - punto 7
#include <stdio.h>
#include <math.h>
#define num 20
main()
{
	int array[num], i=0, porcentaje_posi=0, porcentaje_nega=0;
	float cont_positivo=0, cont_negativo=0;
	for (i=0;i<=num;i++)
	{
		printf("Ingresar numero positivo o negativo\n");
		scanf("%d", &array[i]);
		fflush(stdin);
	}
	
	for (i=0;i<=num;i++)
	{
		if(array[i]>0)
		{
			cont_positivo++;
		}
		else 
		{
			if(array[i]<0)
			{
				cont_negativo++;
			}
		}
	}
	printf("El porcentaje de numeros positivos es: %f\n",(cont_positivo*100)/20);
	printf("El porcentaje de nuemros negativos es: %f\n",(cont_negativo*100)/20);
	
	system ("pause");
	return 0;
}
