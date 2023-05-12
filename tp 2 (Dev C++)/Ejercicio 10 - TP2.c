#include <stdio.h>
#include <math.h>
//Ejercicio 10 TP2
main()
{
	int puntaje, finalp, finalp2, finalp3;
	
	printf("Ingresar puntaje alcanzado (1-10):"); scanf("%d", &puntaje);
	
	if(puntaje<=5)
	{
		finalp=puntaje*6;
		printf("Puntaje alcanzado:%d\n", finalp);
	}
	else
	{
		if(puntaje>=6 && puntaje<=8)
		{
		finalp2=puntaje*9;
		printf("Puntaje alcanzado:%d\n", finalp2);
		}
		else 
		{
			finalp3=puntaje*10;
			printf("Puntaje alcanzado:%d\n", finalp3);
		}
		
	}
	system("pause");
}
