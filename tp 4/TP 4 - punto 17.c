#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
	char cadena[20];
	int i, vocal=0, consonante=0, cad;
	
	for(i=0;i<1;i++)
	{
		printf("Ingresar una cadena de caracteres:");
		gets(cadena);
		fflush (stdin);
	}
	
	cad = strlen(cadena);
	
	printf("Cantidad de caracteres: %d\n", cad);
	
	for(i=0;i<cad;i++)
	{
		switch(cadena[i])
		{
			case 'a': vocal++;
			break;
			case 'e': vocal++;
			break;
			case 'i': vocal++;
			break;
			case 'o': vocal++;
			break;
			case 'u': vocal++;
			break;
		}	
	}
	
	consonante = cad - vocal;
	
	printf("Cantidad de vocales: %d\n", vocal);
	printf("Cantidad de consonantes: %d\n", consonante);
	system ("pause");
}
