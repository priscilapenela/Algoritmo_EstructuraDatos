#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	int cant;
	float descuento80, descuento6, totalp, p1, p2, pe, pd;
	
	printf("Ingrese cantidad de pc:"); scanf("%d", &cant);
	
	totalp=cant*11500;
	
	if(cant==30)
	{
		descuento80=totalp*(0.80);
		p1=descuento80+(totalp*0.05);
		
		printf("El precio si todas las pc llegan bien sera: %f\n", p1);
		
	}
	else
	{
		descuento6=totalp*(0.92);
		p2=descuento6+(totalp*0.05);
		
		printf("Si las pc llegan mal, el precio sera: %f\n", p2);
	}
	
	printf("Precio sin descuento: %f\n", totalp);
	printf("Precio del envio:%f\n", totalp*0.05);
	printf("Precio del descuento:%f\n", totalp*0.20);
	
	return (0);
}
