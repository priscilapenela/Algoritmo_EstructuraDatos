//TP4 - punto 8
#include <stdio.h>
#include <math.h>
#define posicion 9

main()
{
	int array[posicion], i=0, a=0, maximo=0, ubi_mayor=0, ubi_menor=0, minimo=0;
	
	for(i=0;i<=posicion;i++)
	{
		printf("Ingresar un numero:");
		scanf("%d", &array[i]);
		fflush (stdin);
		
		if(a=0)
		{
			maximo = array[i];
			minimo = array[i];
			ubi_mayor = posicion;
			ubi_menor = posicion;
			a=1;
		}
		else
		{
			if(array[i]>maximo)
			{
			   maximo = array[i];
			   ubi_mayor = posicion;
			   	
			}
			else
			{
				if (array[i]<minimo)
				{
					minimo = array[i];
					ubi_menor = posicion;
				}
			}
		}
	}
	
	for (i=0;i<=posicion;i++)
	{
	printf("El vector es: %d\n", array[i]);
	}
	
	printf("\nNumero mayor es: %d\n", maximo);
	printf("\nLa posicion del numero %d es: %d\n", maximo, ubi_mayor);
	printf("\nNumero menor es: %d\n", minimo);
	printf("\nLa posicion del numero %d es: %d\n", minimo, ubi_menor);
	system("pause");
}
