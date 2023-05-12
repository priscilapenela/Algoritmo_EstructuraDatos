//TP4 - punto 4
#include <stdio.h>
#include <math.h>
#define num 9
main()
{
	int array[num], i=0, a=0, cant_par=0, num_mayor=0, num_menor=0;
	
	for (i=0;i<=num;i++)
	{
		printf ("Ingrese un numero:\n");
		scanf("%d", &i);
		fflush (stdin);
	}
	for (i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			cant_par++;
		}
		if(a=0)
		{
			num_mayor=i;
			num_menor=i;
		}
		else 
		{
			if(i>num_mayor)
			{
				num_mayor=i;
			}
			if(i<num_menor)
			{
				num_menor=i;
			}
		}
	}
	
	printf("Cantidad de numeros par: %d\n", cant_par);
	printf("Numero mayor: %d\n", num_mayor);
	printf("Numero menor: %d\n", num_menor);
	
	system ("pause");
	
}
