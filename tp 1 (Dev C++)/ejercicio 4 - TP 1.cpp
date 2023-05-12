#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, resultado;
	
	printf("Ingrese valor de a:\n ");
	scanf("%f", &a);
	printf("Ingrese valor de b:\n ");
	scanf("%f", &b);
	
	resultado=(a+b)*(a-b);
	
	printf("resultado: %f\n", resultado);
	
}
