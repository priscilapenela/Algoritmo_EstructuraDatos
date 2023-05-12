#include<stdio.h>
#include<math.h>
//Ejercicio 8 TP2
main()
{
	int opcion;
	float n1, n2, suma, resta, multi, divi;
	
	printf("Ingrese 1 para SUMA\n");
	printf("Ingrese 2 para RESTA\n");
	printf("Ingrese 3 para MULTIPLICACION\n");
	printf("Ingrese 4 para DIVISION\n");
	scanf("%d", &opcion);
	
	printf("Ingresar primer numero:"); scanf("%f", &n1);
	printf("Ingresar segundo numero:"); scanf("%f", &n2);
	
	switch (opcion)
	{
		case 1: suma=n1+n2; printf("Resultado:%f\n", suma);
		break;
		case 2: resta=n1-n2; printf("Resultado:%f\n", resta);
		break;
		case 3: multi=n1*n2; printf("Resultado:%f\n", multi);
		break;
		case 4: divi=n1/n2; printf("Resultado:%f\n", divi);
		break;
		default: printf("Error\n");
				
	}
	system ("pause");
}
