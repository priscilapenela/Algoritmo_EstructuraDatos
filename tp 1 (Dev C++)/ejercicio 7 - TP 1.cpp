#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	float importe, i80, i20, i15;
	
	printf("Ingresar valor del importe:"); scanf("%f", &importe);
	
	i80=importe*0.80;
	printf("ochenta porciento: %f\n", i80);
	
	i20=importe*0.20;
	printf("veinte porciento:%f\n", i20);
	
	i15=importe*0.15;
	printf("quince porciento:%f\n", i15);
	
	system("pause");
};
