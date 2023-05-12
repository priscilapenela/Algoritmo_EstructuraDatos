#include <stdio.h>
#include <math.h>
//Ejercicio 7 TP3
int edades(int x, int y, int z);
main()
{
	int e1, e2, e3;
	int em;
	
	printf("Ingrese dos edades:\n");
	scanf("%d", &e1);
	scanf("%d", &e2);
	
	em=edades(e1, e2, e3);
	printf("\nEl numero mayor es:", em);
	
	return (0);
}
int edades (int x, int y, int z)
{
	int media, mayor, menor;
	if(x>y)
	{
		mayor=x;
		z=x-y;
		media=z;
		menor=y;
	}
	else
	{
		mayor=y;
		z=y-x;
		media=z;
		menor=x;
	}

	return mayor;
	return menor;
	return media;
}
