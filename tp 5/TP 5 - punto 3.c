#include <stdio.h>
#include <math.h>
int carga (int * vec);
main()
{
	int vector[5], valores, i;
	
	carga(vector);
	
	printf("Vector: \n");
	for(i=0;i<5;i++)
	{
		printf("Elemento %d: %d\n", i+1, vector[i]);
	}
}
int carga (int * vec)
{
	int y;
	for (y=0;y<5;y++)
	{
		printf("Ingresar numero: ");
		scanf("%d", &vec[y]);
		fflush(stdin);
	}
}
