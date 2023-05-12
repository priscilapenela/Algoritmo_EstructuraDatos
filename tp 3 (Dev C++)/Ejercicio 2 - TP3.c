#include <stdio.h>
#include <math.h>
//Ejercicio 2 TP3
int intercambio(int numero1, int numero2);
main()
{
	int numero1, numero2;
	
	printf("Ingrese numero 1:"); scanf("%d", &numero1);
	printf("Ingrese numero 2:"); scanf("%d", &numero2);
	
	printf("Valores intercambiados\n");
	intercambio(numero1, numero2);
	
	return 0;
	
}
int intercambio(numero1, numero2)
{
	int aux;
	aux=numero1;
	numero1=numero2;
	numero2=aux;
	
	printf("\nnumero 1=%d", numero1);
	printf("\nnumero 2=%d", numero2);
	
	return numero1;
	return numero2;
}
