#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float c, k, f;
	 
	printf("Ingresar temperatura en grados celsius:"); scanf("%f", &c);
	
	k=c+273.15;
	printf("La temperatura %f en grados kelvin equivale a: %f\n", c, k);
	
	f=(c*9/5)+32;
	printf("La temperatura %f en grados faherenheit equivale a: %f\n", c, f);
	
	system("pause");
};

