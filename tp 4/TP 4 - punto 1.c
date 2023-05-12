//TP4 - punto 1
#include <stdio.h>
#include <math.h>
#define NUMEROS 100 
main()
{
	int v[NUMEROS], n=0, cont=0;
	
	for(n=0;n<=NUMEROS;n++)
	{
		if(n%2==0)
		{
			v[cont]=n;
			cont++;
		}
	}
	
	for(n=0;n<=cont;n++)
	{
		printf("%d\n", v[n]);
	}
	
	system("pause");
}
