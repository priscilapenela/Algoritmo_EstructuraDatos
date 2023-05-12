#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Practica 3
//Funciones 
int rs(char u, int d);

main()
{
	//Variables
	int dia, numT, precio, resul1;
	char ubi[3], r[3];
	
	printf("Desea ingresar datos de venta? (Ingrese SI o NO)\n");
	scanf("%s", &r);
	
	while(strcmp(r,"SI")==0)
	{
	printf("Ingresar dia (1, 2, 3):\n");
	scanf("%d", &dia);
	fflush(stdin);
	
	printf("Ingresar ubicacion a adquirir (cam=campo, pla=platea, pac=palco):\n");
	scanf("%s", &ubi);
	fflush(stdin);
	
	/*switch(ubi)
	{
		case "cam": contc++;
		break;
		case "pla": contp++;
		break;
		case "pac": contpc++;
		break;
	}*/
	
	resul1= rs(ubi,dia);
	printf("%i", resul1);
	
	printf("Desea seguir ingresando datos de ventas? (Ingrese SI o NO)\n");
	scanf("%s", &r);
	fflush(stdin);
	}
	
}
int rs(char u, int d)
{
	int nt=0, costo;
	
	switch(d)
	{ 
	   case 1: costo=60;
	           switch (u)
	          {
	            case "cam": nt++;
		        break;
		        case "pla": nt++;
		        break;
		        case "pac": nt++;
		        break;
	          }
	   break;
	   case 2: costo=80;
	            switch (u)
	          {
	            case "cam": nt++;
		        break;
		        case "pla": nt++;
		        break;
		        case "pac": nt++;
		        break;
	          }
	    break;
	    case 3: costo=120;
	            switch (u)
	          {
	            case "cam": nt++;
		        break;
		        case "pla": nt++;
		        break;
		        case "pac": nt++;
		        break;
	          }
	    break;
	}
	
	return nt;
}
