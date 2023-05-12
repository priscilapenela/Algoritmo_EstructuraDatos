//Parcial 3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n 50
int menu();
void datos(int *v1, int *v2, char *v3, int art, char t_art, int c, int i);
void informe(int *v1, int *v2, char *v3, int i);
main()
{
	int v1[n]={0}, v2[n]={0}, articulo=0, compra=0, i=0, x;
	char v3[n]={' '}, t_articulo;
	
	x = menu();
	system ("cls");
	
	while(x != 3)
	{
		switch (x)
		{
			case 1: printf ("Ingresar codigo del articulo: ");
			        fflush(stdin);
			        scanf("%d", &articulo);
			        
			        printf ("Ingresar tipo de articulo (a= Algodon, c= Curitas): ");
			        fflush(stdin);
			        scanf("%c", &t_articulo);
			        
			        printf ("Ingresar importe de la compra: ");
			        fflush(stdin);
			        scanf("%d", &compra);
			        
			        datos(v1, v2, v3, articulo, t_articulo, compra, i);
			        i++;
			        system("cls");
			break;
			case 2: informe(v1, v2, v3, i);
			break;
		}
		
		x = menu();
		system("cls");
	}
	
	system("pause");
}
int menu()
{
	int x;
	
	printf(">>>>>>>>>>> MENU <<<<<<<<<<<\n");
	printf ("1- Ingresar datos de la venta.\n2- Generar informes del dia.\n3- Salir.\n\n Opcion: ");
	fflush(stdin);
	scanf("%d", &x);
	
	return x;
	
}
void datos(int *v1, int *v2, char *v3, int art, char t_art, int c, int i)
{
	*(v1+i) = art;
	*(v2+i) = c;
	*(v3+i) = t_art;
}
void informe(int *v1, int *v2, char *v3, int i)
{
	int y, cant_a=0, cant_c=0, factura=0, factura_c=0;
	
	for (y=0;y<i;y++)
	{
		
		factura = factura + *(v2+y);
	
		switch (*(v3+y))
		{
			case 'a': cant_a++;
			break;
			case 'c': cant_c++;
			          factura_c = factura_c + *(v2+y);
			break;
		}
	}
	
	printf("Cantidad de clientes que compraron ALGOHODON: %d\n", cant_a);
	printf("\nCantidad de clientes que compraron CURITAS: %d\n", cant_c);
	
	printf ("Total facturado: %d\n", factura);
	
	printf("Total facturado de CURITAS: %d\n", factura_c);
	
	system("pause");
	system("cls");
}
