#include <stdio.h>
#include <math.h>
int funcion_suma(int *n1, int *n2);

main()
{
	int numero1, numero2;
	
	printf("Ingresar primer numero: ");
	scanf("%d", &numero1);
	printf("Ingresar segundo numero: ");
	scanf("%d", &numero2);
	
	funcion_suma(&numero1, &numero2);
}
int funcion_suma(int *n1, int *n2)
{
	int suma;
	suma = *n1 + *n2;
	
	printf("Resultado: %d", suma);
}
