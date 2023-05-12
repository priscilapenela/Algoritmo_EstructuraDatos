#include <stdio.h>
#include <math.h>
//* Ejercicio 2 TP2*//

main()
{
	float n1, n2, resta, multiplicacion;
	
	printf("ingresar primer numero:"); scanf("%f", &n1);
	fflush(stdin);
	
	printf("ingresar segundo numero:"); scanf("%f", &n2);
	fflush(stdin);
	
	if(n1>n2)
	{
		resta=n1-n2;
		printf("Resultado:%f\n", resta);
	}
	else
	{
		multiplicacion=n1*n2;
		printf("Resultado:%f\n", multiplicacion);
	}
}
