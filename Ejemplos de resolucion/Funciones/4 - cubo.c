#include <stdio.h>
#include <stdlib.h>
/*prototipo de la funcion cubo*/
int cubo(int ); 
main()
{
	int numero;
	for(numero=1; numero<=5; numero++)
	{
		printf("El cubo del número %d es %d\n", numero, cubo(numero)); // invocacion
	}
	system("pause");
	return 0;
}
/*definicion de la funcion*/
int cubo(int base)
{
int potencia;
potencia = base * base * base;
return potencia;
}

