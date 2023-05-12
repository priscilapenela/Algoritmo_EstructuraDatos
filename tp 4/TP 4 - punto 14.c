#include <stdio.h>
#include <math.h>
main()
{
	int matriz[3][3];
	int numero, a=0, mayor, i, j;
	//Matriz
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Ingrese un numero:");
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
		}
	}
	
	printf ("Ingresar un numero de fila: ");
	scanf ("%d", &numero);
	fflush(stdin);
	
	mayor = matriz[0][0];
	for (i=0;i<3;i++)
	{
	  for (j=0;j<3;j++)
	  {
		if (numero-1==i)
		{
		    if(mayor<matriz[i][j])
	       {
	    	  mayor = matriz[i][j];
	       }
		}
	  }
	}
	
	printf("El numero mayor de la fila %d es: %d\n", numero, mayor);
	
	system("pause");
}
