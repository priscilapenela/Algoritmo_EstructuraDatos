#include <stdio.h>
#include <math.h>
//Ejercicio 16 TP2
main()
{
	int cont_nota=0;
	float acum_nota=0, nota, promedio;
	
	printf("Ingresar nota:"); scanf("%f", &nota);
	fflush(stdin);
	
	while (nota!=0)
	{
		cont_nota=cont_nota+1;
		acum_nota=acum_nota+nota;
		
		printf("Ingresar nota:"); scanf("%f", &nota);
	}
	
	promedio=acum_nota/cont_nota;
	printf("Promedio de notas: %f\n", promedio);
	
	system("pause");
}
