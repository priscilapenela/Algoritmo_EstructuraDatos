#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
	char cadena[2][30], aux[30];
	int i, cad1, cad2, a=0;
	
	printf("Ingresar cadenas:\n");
	for (i=0;i<2;i++)
	{
		gets(cadena[i]);
		fflush(stdin);
	}
	
	printf("\nCadenas:\n");
	for(i=0;i<2;i++)
	{
		printf("%s\n", cadena[i]);
	}

	for(i=0;i<2;i++)
	{
		if(a==0)
		{
			cad1 = strlen(cadena[i]);
			a=1;
		}
		else 
		{
			cad2 = strlen(cadena[i]);
			if(cad1==cad2)
			{
				printf("\nLas cadenas son iguales\n");
			}
			else 
			{
				printf("\nLas cadenas son distintas\n");
			}
		}
	}
	
	system("pause");
}
