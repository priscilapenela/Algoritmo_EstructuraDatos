// TP4 - punto 11
#include <stdio.h>
#include <math.h>

main()
{
	int tamanio=0, arrayT[tamanio], i=0, aux=0, aux2=0;
	
	printf("Ingresar tamanio del vector:");
	scanf("%d", &tamanio);

	for (i=0;i<tamanio;i++)
	{
		printf("Ingresar numero:");
		scanf("%d", &arrayT[i]);
		fflush (stdin);	
	}
	
	if(tamanio%2==0)
	{
		for (i=0;i<tamanio/2;i++)
	    {
		    aux = arrayT[i];
		    arrayT[i] = arrayT[(tamanio/2)-i];
		    arrayT[(tamanio/2)-i] = aux;
	    }
		
		for(i=0;i<=tamanio/2;i++)
		{
			aux2 = arrayT[i+(tamanio/2)];
			arrayT[i+(tamanio/2)] = arrayT[tamanio-i];
			arrayT[tamanio-i] = aux2;
		}	
	}
	
	for (i=0;i<tamanio;i++)
	{
		printf("El vector es: %d\n", arrayT[i]);
	}
	system ("pause");	
}
