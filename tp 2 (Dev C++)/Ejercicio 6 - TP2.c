#include <stdio.h>
#include <math.h>
//Ejercicio 6 TP2
main()
{
	int numero;
	
	printf("ingresar un numero:"); scanf("%d", &numero);
	fflush(stdin);
	
	if(numero%2==0) //MOD se utilida para ver el resto de una division
	{
		printf("numero par");
	}
	else
	{
		printf("numero impar");
	}
	return (0);
}
