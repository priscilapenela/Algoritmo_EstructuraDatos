#include <stdio.h>
//*Ejercicio 3 TP2*//

main ()
{
	float n1,n2,n3;
	
	printf("ingresar primer numero:"); scanf("%f", &n1);
	printf("ingresar segundo numero:"); scanf("%f", &n2);
	printf("ingresar tercer numero:"); scanf("%f", &n3);
	
	if(n1<n2)
	{
		if(n2<n3)
		{
			printf("%f, %f, %f se encuentran en orden ascendente\n", n1, n2, n3);
		}
	}
	else 
	{
		printf("Los numeros ingresados no cumplen condicion\n");
	}
}
