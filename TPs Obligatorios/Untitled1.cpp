#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Estacion de peaje
int funcion1(int b, int d, char h);
int vuelto(int i, int x);
void mostrar(int x, int z);
main()
{
	int dia=0, base=0, x=0, z=0, importe=0, cont_a=0, cont_p=0, acum_t=0;
	char v, hora, r[3];
	
	printf("Desea ingresar una venta? (ingrese SI o NO):\n");
	fflush(stdin);
	scanf("%s", &r);
	
	while(strcmp(r,"SI")==0)
	{
	printf("\nIngresar categoria del vehiculo: (moto=M, auto=A, camioneta=C, camion=K): ");
	fflush(stdin);
	scanf("%c", &v);
	
    switch(v)
	{
		case 'M': base=5;
		break;
		case 'A': base=10;
		break;
		case 'C': base=15;
		break;
		case 'K': base=20;
		break;
	}
	
	printf("\nIngresar dia de la semana: (1=lunes, 2=martes, 3=miercoles, 4=jeves, 5=viernes, 6=sábado, 7=domingo)\n");
	fflush(stdin);
	scanf("%d", &dia);
	
	printf("\nIngresar horario: (a=pico, b=no pico)\n");
	fflush(stdin);
	scanf("%c", &hora);
	
    if(v=='A')
    {
    	if(hora=='a')
    	{
    		cont_a++;
		}
	}
	
	x = funcion1(base,dia,hora);
	
	printf("\nIngresar el importe entregado por el conductor: ");
	fflush(stdin);
	scanf("%d", &importe);
	
	z = vuelto(importe, x);
	
	mostrar(x,z);
	
	system("pause");
	
	cont_p++;
	acum_t=acum_t+x;
	printf("Desea ingresar otra venta? (ingrese SI o NO):\n");
	fflush(stdin);
	scanf("%s", &r);
	
	}
	
	printf("\nCantidad de autos en hora pico: %d\n", cont_a);
	printf("\nCantidad de pases vendidos: %d\n", cont_p);
	printf("\nTotal recaudado: %d\n", acum_t);
	system("pause");
}
int funcion1(int b, int d, char h)
{
	int import=0, agregado=0;
	 
	 agregado = 20*b/100;
	 if (d<=5)
	 {
	 	if(h!= 'b')
	 	{
	 		import = b + agregado;
	 	    
		}
		else 
		{
			import = b - agregado;
		}
	 }
	else 
	{
		import = b - agregado;
	}
	
	return import;
}
int vuelto(int i, int x)
{
	int calculo;
	calculo = x-i;
	
	return calculo;
}
void mostrar(int x, int z)
{
	system("cls");
	printf("\nEl importe a pagar por el conductor: %d\n", x);
	printf("\nVuelto: %d\n", z);
	
	system("pause");
	system("cls");

}
