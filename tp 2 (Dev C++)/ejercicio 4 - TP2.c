#include <stdio.h>
#include <math.h>
//* Ejercicio 4 TP2 *//
main ()
{
	int cantm, canth, cantalum, totalp;
	
	printf("ingresar cantidad de alumnas:"); scanf("%d", &cantm);
	fflush(stdin);
	printf("ingresar cantidad de alumnos:"); scanf("%d", &canth);
	fflush(stdin);
	
	cantalum=cantm+canth;
	
	if(cantalum<35)
	{
		totalp=cantalum*55;
		printf("costo total de salida:%d\n", totalp);
	}
	else
	{
		printf("Curso numeroso");
	}
}
