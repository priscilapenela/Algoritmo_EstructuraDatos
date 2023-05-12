//TP4 - punto 3
#include <stdio.h>
#include <math.h>
#define num 9
main()
{
	int arreglo[num], i=0, suma=0, resta=0, multiplicacion=1; 
	float divi;
	
	for (i=0;i<=num;i++)
	{
		printf("Ingrese un numero\n");
		scanf("%d", &arreglo[i]);	
	}
	
	for(i=0;i<=10;i++)
	{
		if(i>=0)
		{
			suma=suma+i;
			resta=resta-i;
			if(i>1)
			{
				multiplicacion=multiplicacion*i;
			}
		    if(i>1)
			 {
			    divi=divi/i;
		     }
		}
	}
	printf("Suma: %d\n", suma);
	printf("Resta: %d\n", resta);
	printf("Multiplicacion: %d\n", multiplicacion);
	printf("Division: %f\n", divi);
	system ("pause");
}
