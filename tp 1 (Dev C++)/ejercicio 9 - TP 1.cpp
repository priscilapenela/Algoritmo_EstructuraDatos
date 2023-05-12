#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float radio, area, altura, volumen;
	const double pi=3.141592;
	
	printf("Ingresar valor del radio:"); scanf("%f", &radio);
	
	area=pi*(pow(radio,2));
	
	printf("Area:%f\n", area);
	
	printf("Ingresar altura:"); scanf("%f", &altura);
	
	volumen=(area*altura);
	
	printf("Volumen:%f\n", volumen);
	
	system("pause");
}
