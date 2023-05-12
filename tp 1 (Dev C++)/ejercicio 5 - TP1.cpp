#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, potencia;
	
	printf("Ingrese numero base:\n");
	scanf("%f", &a);
	
	printf("Ingrese exponente:\n");
	scanf("%f", &b);
	
	potencia=pow(a,b);
	
	printf("Potencia:%f\n", potencia);
};
