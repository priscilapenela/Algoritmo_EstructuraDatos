//TP4 - punto 5
#include <stdio.h>
#include <math.h>
#include <string.h>
#define num 9
#define n 10
main()
{
	int array[num], array2[n], i=0, k=0, bandera=0;
	
	for (i=0;i<=num;i++)
	{
		printf("Ingrese un numero:\n");
		scanf("%d", &array[i]);
		fflush(stdin);

	}
	/*for(i=0;i<=num;i++)
	{
		printf("Vector actual: %d\n", array[i]);
	}*/
	
	printf("Ingrese el primer valor a comparar:\n");
	scanf("%d", &k);
	fflush(stdin);
	
	for (i=0;i<=num;i++)
	{
		if(array[i]==k)
		{
			bandera=1;
		}
	}
	
	if(bandera==1)
	{
		printf("El numero ingresado %d se encuentra entre los anteriores\n", k);
	}
	else
	{
		printf("El numero ingresado %d no esta entre los anteriores\n", k);
	}
	system ("pause");
	return 0;
}
