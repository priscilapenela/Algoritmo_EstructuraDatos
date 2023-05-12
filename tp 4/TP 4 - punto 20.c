#include <stdio.h>
#include <string.h>
#include <math.h>

main()
{
	int fila1, columna1, fila2, columna2, ifila, icolumna;
	
	printf("Ingresar numero de filas de la primer matriz:");
	scanf("%d", &fila1);
	fflush(stdin);
	printf("Ingresar numero de columnas de la primer matriz:");
	scanf("%d", &columna1);
	fflush(stdin);
	
	int matriz1[fila1][columna1], matriz2[fila2][columna2], suma[ifila][icolumna], multi[ifila][icolumna];
	int i, j, opcion, aux;
	
	for (i=0;i<fila1;i++)
	{
		for (j=0;j<columna1;j++)
		{
			printf("Ingresar elemento (%2d,%2d): ", i+1,j+1);
			scanf("%d", &matriz1[i][j]);
			fflush(stdin);
		}
	}
	
	system("cls");
	
	printf("Ingresar numero de filas de la primer matriz:");
	scanf("%d", &fila2);
	fflush(stdin);
	printf("Ingresar numero de columnas de la primer matriz:");
	scanf("%d", &columna2);
	fflush(stdin);
	
	for (i=0;i<fila2;i++)
	{
		for (j=0;j<columna2;j++)
		{
			printf("Ingresar elemento (%2d,%2d): ", i+1,j+1);
			scanf("%d", &matriz2[i][j]);
			fflush(stdin);
		}
	}
	
	system("cls");
	
	printf("Seleccione operacion a realizar: ");
	printf("1 - sumar matrices");
	printf("2 - multiplicar matrices");
	printf("3 - salir del programa");
	scanf("%c", &opcion);
	fflush(stdin);
	
	while (opcion!=3)
	{
		switch(opcion)
		{
		    case 1: for (i=0;i<fila2;i++)
	                {
		                for (j=0;j<columna2;j++)
		                {
			              suma [i][j] = matriz1[i][j] + matriz2[i][j];
			              printf("\n%d\n", suma [i][j]);
	                    }
	                    printf("\n");
		            }
		    break;        
		    case 2: for (i=0;i<fila2;i++)
		            {
		            	for (j=0;j<columna2;j++)
		            	{
		            	    multi [i][j] = (matriz1[i][j])*(matriz2[i++][j--]);
		            		printf("\n%d\n", multi [i][j]);
						}
						printf("\n");
					}
	    }
	    
	printf("Seleccione operacion a realizar: ");
	printf("1 - sumar matrices");
	printf("2 - multiplicar matrices");
	printf("3 - salir del programa");
	scanf("%c", &opcion);
	fflush(stdin);
    }

    system("pause");
}
