#include <stdio.h>
#include <stdlib.h>

int main()
{
	float d, i;
	
	printf("Ingrese importe en pesos:"); scanf("%f", &i);
	
	d=i/15.40;
	
	printf("el importe %f equivale a:%f\n", i, d);
	
	system("pause");
};
