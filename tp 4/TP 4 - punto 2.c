//TP4-punto 2
#include <stdio.h>
#include <math.h>
#define num 9

main()
{
	int arreglo[num], n=0; 
	
	for(n=0;n<=num;n++)
	{
		printf("Ingrese un valor:\n");
		scanf("%d", &arreglo[n]);
		
	}
	printf ("Orden del vector original\n");
	for(n=0;n<num;n++)
	{
	printf("%d\n", arreglo[n]);	
	}
	for (n=9; n>=0;n--)
	{
		printf("%d\n", arreglo[n]);
	}
	system ("pause");
}
