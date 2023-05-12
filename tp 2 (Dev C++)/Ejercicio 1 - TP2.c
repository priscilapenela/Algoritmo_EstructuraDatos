#include <stdio.h>
#include <stdlib.h>
//*ejercicio 1 TP2*//

main()
{
	char legajo[50];
	float nota;
	
	printf("Ingresar legajo del alumno:\n"); 
	gets(legajo); //*Esta funcion permite almacenar una cadena de caracteres*//
	fflush(stdin);
	
	printf("Ingresar nota del alumno:\n"); 
	scanf("%f", &nota);
	fflush(stdin);//*En caso de tener un gets despues de un scanf siempre usar un fflush de por medio para limpiar el buffer*//
	
	if(nota>6)
	{
		printf("Nota superior a 6\n");
	}
	else
	{
		printf("Nota inferior a 6\n");
	}
	return (0);
}
