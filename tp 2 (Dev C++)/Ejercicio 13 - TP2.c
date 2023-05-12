#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Ejercicio 13 TP2
main ()
{
	int cant, edad, mayores, edades, promedioedad;
	float altura, alturas, mayoralt, promedioesta;
	int i=0;
	int cont_edad=0;
	int acum_edad=0;
	int acum_altura=0;
	int cont_altura=0;
	
	printf("Ingresar cantidad de alumnos:"); scanf("%d", &cant);
	fflush(stdin);

	while (i<cant)
	{
		printf("Ingresar edad:"); scanf("%d", &edad);
		fflush(stdin);
		
		if(edad>10)
		{
			cont_edad++;
		}
		acum_edad=acum_edad+edad;
		
		printf("Ingresar estatura:"); scanf("%f", &altura);
		fflush(stdin);
		
		if(altura>1.40)
		{
			cont_altura++;
		}
		acum_altura=acum_altura+altura;
		i++;
	}

	promedioedad=acum_edad/cant;
	printf("promedio de edades: %d\n", promedioedad);
	
	promedioesta=acum_altura/cant;
	printf("promedio de estaturas: %f\n", promedioesta);
	
	printf("Cantidad de alumnos(+10):%d\n", cont_edad);
	
	printf("Cantidad de alumnos con +1.40mt: %f\n", cont_altura);
	
	return (0);
}
