#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Ejercicio 14 TP2
main()
{
	int votantes=100;
	int votos=1;
	int cont_candidato1=0;
	int cont_candidato2=0;
	int candidato;
	float porcentaje_a, porcentaje_b;
	
	
	while (votos<votantes);
	{
		printf("Seleccione 1 para candidato a");
		printf("Selecciones 2 para candidato b");
		scanf("%d", &candidato);
		
		switch (candidato)
		{
			case 1: cont_candidato1++;
			break;
			case 2: cont_candidato2++;
			break;
		}
	}
	
	porcentaje_a=(cont_candidato1*100)/100;
	printf("Porcentaje de candidato a: %f\n", porcentaje_a);
	
	porcentaje_b=(cont_candidato2*100)/100;
	printf("Porcentaje de candidato b: %f\n", porcentaje_b);
}
