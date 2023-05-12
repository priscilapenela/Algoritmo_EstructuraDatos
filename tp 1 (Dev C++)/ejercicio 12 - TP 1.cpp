#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float t1, t2, t3, suma, promedio;
	
	printf("Ingrese tres temperaturas:\n"); 
	scanf("%f", &t1);
	scanf("%f", &t2);
	scanf("%f", &t3);
	
	suma=t1+t2+t3;
	
	promedio=suma/3;
	
	printf("Promedio de temperatura: %f\n", promedio);
}
