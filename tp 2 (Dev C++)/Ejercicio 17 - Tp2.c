#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Ejercicio 17 TP2
main()
{
	int cont_5075=0, cont_80=0, cont_30=0, n;
	
	printf("Ingresar un numero:"); scanf("%d", &n);
	
	while(n!=0)
	{
		if(n>80)
		{
			cont_80=cont_80+1;
		}
		else
		{
			if(n>49 && n<74)
			{
				cont_5075=cont_5075+1;
			}
			else
			{
				if(n<30)
				{
					cont_30=cont_30+1;
				}
			}
		}
		printf("Ingrese un numero:"); scanf("%d", &n);
	}
	
	printf("Numeros mayores a 80:%d\n", cont_80);
	printf("Numeros entre 50 y 75:%d\n", cont_5075);
	printf("Numeros menores 30:%d\n", cont_30);
	
	system("pause");
}
