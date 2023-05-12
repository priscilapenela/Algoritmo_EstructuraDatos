#include <stdio.h>
#include <math.h>
//Ejercicio 18 TP2
main()
{
    int codigo, precio;
	int bandera=0, codigo_mayor=0, precio_mayor=0, codigo_menor=0, precio_menor=0;
	
	printf("Ingrese el codigo del producto:"); scanf("%d", &codigo);
	printf("Ingrese el precio del producto:"); scanf("%d", &precio);
	
	while (codigo!=0)
	{
		if(bandera==0)
		{
			codigo_mayor=codigo;
			precio_mayor=precio;
			codigo_menor=codigo;
			precio_menor=precio;
		}
		else
		{
			printf("Ingrese el precio del producto:"); scanf("%d", &precio);
			if(precio>precio_mayor)
			{
				precio_mayor=precio;
				codigo_mayor=codigo;
			}
			else 
			{
				if(precio<precio_menor)
				{
					precio_menor=precio;
					codigo_menor=codigo;
				}
			}
		}
		bandera=1;
		printf("Ingrese el codigo del producto:"); scanf("%d", &codigo);
	}
	
	printf("Articulo %d posee el menor precio %d\n", codigo_menor, precio_menor);
	printf("Articulo %d posee el mayor precio %d\n", codigo_mayor, precio_mayor);
	
	system("pause");
}

