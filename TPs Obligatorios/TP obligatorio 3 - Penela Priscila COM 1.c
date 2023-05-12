#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define v 50

int menu();
void cliente(int *v1, int *v2, char *v3, int *v4, int cod, int c_uni, char z, int m, int y);
void informe(int *v1, int *v2, char *v3, int *v4, int y, int c_stock);
main()
{
	int codigo, c_unidades, marca, x, c_stock, y=0;
	int v1[v]={0}, v2[v]={0}, v4[v]={0};
	char zona, v3[v]={' '};
	
    x = menu();
	
	while (x != 4)
	{
		switch(x)
		{
			case 1: printf("Ingrese stock de producto en planta: ");
			        fflush(stdin);
			        scanf("%d", &c_stock);
			        system ("cls");
			break;
			case 2: printf ("Ingresar codigo del cliente: ");
			        fflush(stdin);
			        scanf("%d", &codigo);
			        
			        printf ("Ingresar cantidad de unidades solicitadas: ");
			        fflush(stdin);
			        scanf("%d", &c_unidades);
			        
			        printf ("Ingresar codigo de zona: (N=norte, S=sur, O=oeste, C=centro): ");
			        fflush(stdin);
			        scanf("%c", &zona);
			        
			        printf ("Ingresar forma de distribucion: (1= Retira en planta, 0= Lleva flete): ");
			        fflush(stdin);
			        scanf("%d", &marca);
			        
			        cliente(v1, v2, v3, v4, codigo, c_unidades, zona, marca, y);
			        y++;
			        system ("cls");
			break;
			case 3: informe(v1, v2, v3, v4, y, c_stock);
			break;
		}
		system ("cls");
	if (c_stock==0)
	{
	x = menu();
	}
	else 
	{
	printf("------------> MENU <-------------\n Seleccione una opcion: \n\n");
	printf ("2- Ingresar Pedidos de Call Center del dia.\n3- Generar Informe para el Sector de Logistica y Produccion al finalizar el dia.\n4- Salir.\n");
	printf ("\nOpcion: ");
	fflush(stdin);
	scanf("%d", &x);
	}
 }
	 
	system ("pause");
}
int menu()
{
	int x;
	
	printf("------------> MENU <-------------\n Seleccione una opcion: \n\n");
	printf ("1- Ingresar stock de producto en planta(Opcion disponible solo una vez)\n2- Ingresar Pedidos de Call Center del dia.\n3- Generar Informe para el Sector de Logistica y Produccion al finalizar el dia.\n4- Salir.\n");
	printf ("\nOpcion: ");
	fflush(stdin);
	scanf("%d", &x);
	
	return x;
}
void cliente(int *v1, int *v2, char *v3, int *v4, int cod, int c_uni, char z, int m, int y)
{
	*(v1+y) = cod;
	*(v2+y) = c_uni;
	*(v3+y) = z;
	*(v4+y) = m;
}
void informe(int *v1, int *v2, char *v3, int *v4, int y, int c_stock)
{
	int i, cant_n=0, cant_s=0, cant_o=0, cant_c=0, cantidad=0;
	for (i=0;i<y;i++)
	{
		printf ("\nCodigo de cliente %d: %d\n",i+1, *(v1+i));
		printf("\nCantidad de unidades solicitadas: %d\n", *(v2+i));
		cantidad = cantidad + *(v2+i);
		printf("\nCodigo de zona: %c\n", *(v3+i));
		printf("\nForma de distribucion: %d\n", *(v4+i));
		
		if (*(v4+i)==0)
		{
			switch(*(v3+i))
			{
				case 'N': cant_n++;
				break;
				case 'S': cant_s++;
				break;
				case 'O': cant_o++;
				break;
				case 'C': cant_c++;
				break;
			}
		}
	}
	printf("\nStock: %d\n", c_stock);
	system ("pause");
	system ("cls");
	
	printf("Cantidad de pedidos de zona NORTE: %d\n", cant_n);
	printf("Cantidad de pedidos de zona SUR: %d\n", cant_s);
	printf("Cantidad de pedidos de zona OESTE: %d\n", cant_o);
	printf("Cantidad de pedidos de zona CENTRO: %d\n", cant_c);
	
	if (cantidad < c_stock)
	{
		printf("Stock suficiente\n\n");
	}
	else 
	{
		printf("Stock insuficiente\n\n");
		printf("Faltan %d para legar a la cantidad demandada\n", cantidad-c_stock);
	}
	system ("pause");
}
