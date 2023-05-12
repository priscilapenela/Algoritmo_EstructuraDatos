#include <stdio.h>
#include <math.h>
//Ejercicio 1 TP3
int potencia(int base, int exponente);
main()
{
	int base, exponente;
	printf("Ingrese numero base:"); scanf("%d", &base);
	printf("Ingrese exponente:"); scanf("%d", &exponente);
	printf("Resultado: %d\n", potencia(base, exponente));
	return (0); 
}
int potencia(int base, int exponente)
{
	int calculo;
	calculo=pow(base, exponente);
	return calculo;
	
}
