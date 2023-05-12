#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void carga(int *v);
void encontrar_max(int *v, int *max);
main()
{
	int vector[5], i, max;
	
	carga(vector);
	
	encontrar_max(vector, &max);
	
	printf("El mayor valor es: %d\n", max);
	
	system("pause");
	
}
void carga(int *v)
{
	int i, numero;
	for (i=0;i<5;i++)
	{
		printf("Ingresar un numero: ");
		scanf("%d", &numero);
		fflush(stdin);
		*v = numero;
	}
	
}
void encontrar_max(int *v, int *max)
{
	int i, a=0;
	for (i=0;i<5;i++)
	{
		if(a==0)
		{
			*max = *v;
			a=1;
		}
		else 
		{
			if(*v >*max)
			{
				*max = *v;
			}
		}
	}
}
