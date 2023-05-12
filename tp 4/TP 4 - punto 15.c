#include <stdio.h>
#include <math.h>

main()
{
	int fila, columna;
	
	printf ("Ingresar numero de filas de la matriz:");
	scanf ("%d", &fila);
	fflush (stdin);
	
	printf ("Ingresar numero de columnas de la matriz:");
	scanf ("%d", &columna);
	fflush (stdin);
	
	int matriz[fila][columna];
	int i, j, suma_posi=0, suma_nega=0;
	
	for(i=0;i<fila;i++)
	{
		for(j=0;j<columna;j++)
		{
			printf("Ingresar numeros:");
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
		}
	}
	
	for(i=0;i<fila;i++)
	{
		for(j=0;j<columna;j++)
		{
			if(matriz[i][j]>0)
			{
				suma_posi=suma_posi+matriz[i][j];
			}
			else
			{
				if(matriz[i][j]<0)
				{
					suma_nega=suma_nega+matriz[i][j];
				}
			}
		}
	}
	
	printf("Suma de los numeros positivos: %d\n", suma_posi);
	printf("Suma de los numeros negativos: %d\n", suma_nega);
}
