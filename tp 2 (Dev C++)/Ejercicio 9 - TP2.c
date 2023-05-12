#include <stdio.h>
#include <math.h>
//Ejercicio 9 TP2
main ()
{
	float a,b,c;
	
	printf("Ingrese lado 1:"); scanf("%f", &a);
	fflush(stdin);
	printf("Ingrese lado 2:"); scanf("%f", &b);
	fflush(stdin);
	printf("Ingrese lado 3:"); scanf("%f", &c);
	fflush(stdin);
	
	if(a==b&&a==c) //la && significa "Y"
	{
		printf("El triangulo es equilatero"); 
	}
	else 
	{
		if(a==b||a==c||b==c) //la || significa "O"
		{
			printf("El triangulo es isosceles");
		}
		else 
		{
			printf("El triangulo es escaleno");
		}
	}
	return (0);
}
