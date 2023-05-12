#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float hipotenusa, a, b;
	
	printf("Ingrese el valor del cateto a:"); scanf("%f", &a);
	
	printf("Ingrese el valor del cateto b:"); scanf("%f", &b);
	
	hipotenusa=sqrt(pow(a,2)*pow(b,2));
	
	printf("El valor de la hipotenusa es:%f\n", hipotenusa);
}
