#include <stdio.h>
#include<stdlib.h>
void copiarvector(int * v1, int * v2, int *i);

main()
{
	int vector1[5], vector2[5], i;
	
	for (i=0;i<5;i++)
	{
		printf("Ingresar elemento de vector 1: ");
		scanf("%i", &vector1[i]);
		fflush(stdin);
	}
	
	for (i=0;i<5;i++)
	{
		printf("Ingresar elemento de vector 2: ");
		scanf("%i", &vector2[i]);
		fflush(stdin);
	}
	
	copiarvector(&vector1, &vector2, i);
	
	printf("Vector:\n ");
	for (i=0;i<5;i++)
	{
		printf(" Nuevo valor de la posicio %d: %d", i+1, vector2[i]);
	}
}
void copiar_vector(int *v1, int *v2, int i)
{
	int y;
	for (y=0;y<i;y++)
	{
		* v2 = * v1;
		v2++;
		v1++;
	}
}
