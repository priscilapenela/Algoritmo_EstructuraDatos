#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a, b, suma, resta, multi, divi;
	int aux;
	
	printf("Dato a:\n");
	scanf("%f", &a);
	
	printf("Dato b:\n");
	scanf("%f", &b);
	
	suma=a+b;
	resta=a-b;
	multi=a*b;
	divi=a/b;
	
	printf("Suma: %f \n", suma);
	printf("Resta: %f \n", resta);
	printf("Multiplicacion: %f \n", multi);
	printf("Division: %f \n", divi);
	
	aux=a;
	a=b;
	b=aux;
	
	printf("valores intercambiados:");
	printf("a: %f\n", a);
	printf("b: %f\n", b);
	
	system("pause");
	
	
};
