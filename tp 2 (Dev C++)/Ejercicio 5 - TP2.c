#include <stdio.h>
#include <stdlib.h>
//* Ejercicio 5 TP2*//

main()
{
	float calif;
	
	printf("ingrese calificacion:"); scanf("%f", &calif);
	fflush (stdin);
	
	if(calif>=7)
	{
		printf("Aprobado");
	}
	else
	{
		printf("No aprobado");
	}
	
	return (0);
}
