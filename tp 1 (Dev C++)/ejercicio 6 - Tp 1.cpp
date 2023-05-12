#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float a, b, c, tripla, dobla, mitada, triplb, doblb, mitadb;
	
	printf("Ingrese tres numeros:\n"); 
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	dobla=a*2;
	printf("el doble de %f", a, "es: %f\n", abs(dobla));
	fflush(stdin);
	
	tripla=a*3; 
	printf("el triple de %f", a, "es: %f\n", abs(tripla));
	fflush(stdin);
	
	mitada=a/2;
	printf("la mitad de %f", a, "es: %f\n", abs(mitada));
	fflush(stdin);
	
	doblb=b*2; triplb=b*3; mitadb=b/2;
	
	printf("el doble de %f", b, "es: %f", abs(doblb), "\n");
	fflush(stdin);
	printf("el triple de %f", b, "es: %f", abs(triplb), "\n");
	fflush(stdin);
	printf("la mitad de %f", b, "es: %f", abs(mitadb), "\n");
	fflush(stdin);
	
	
};
