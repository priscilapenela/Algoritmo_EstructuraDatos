#include <stdio.h>
#include <math.h>

main()
{
	int matriz[4][3], i, j, fila=0, columna=0, mayor=0, a=0, menor=0, e;
	int fila_me, columna_me, fila_ma, columna_ma;
	for (i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese elemento de la matriz:");
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
		}
	}
	
	mayor = matriz[0][0];
	for (i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%10d", matriz[i][j]);
			
			if(a==0)
			{
				menor = matriz[i][j];
				fila_me = i;
				columna_me = j;
				
				mayor = matriz[i][j];
				fila_ma = i;
				columna_ma = j;
				
				a=1;
			}
			else 
			{
				if(matriz[i][j]<menor)
				{
					menor = matriz[i][j];
				    fila_me = i;
				    columna_me = j;
				}
				if(matriz[i][j]>mayor)
			    {
				    mayor = matriz[i][j];
				    fila_ma = i;
				    columna_ma = j;
			    }
		    }
		}
		printf("\n");
	}
	
	printf("El mayor elemento es %d en la fila %d, columna %d\n", mayor, (fila_ma+1), (columna_ma+1));
	printf("El menor elemento es %d en la fila %d, columna %d\n", menor, (fila_me+1), (columna_me+1));
	
}
