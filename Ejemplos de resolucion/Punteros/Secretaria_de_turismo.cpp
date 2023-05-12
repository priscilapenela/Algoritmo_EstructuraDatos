/*Ejercicio tipo parcial
La Secretaría de Turismo realiza mensualmente el procesamiento de datos relevados diariamente en 
relación a la cantidad de turistas que ingresan a cada uno de los centros turísticos más importantes del país. 
Para ello se dispone de la siguiente información:

Los centros turísticos son 3, codificados con ‘a’, ‘b’, ‘c’, respectivamente.

Los datos relevados son:
	Día (entero de 1 a 31).
	Código de centro turístico ( ‘a’, ‘b’ ó ‘c’)
	Vía de acceso (1=Auto, 2=Avión, 3=Micro, 4=Tren).
 	Cantidad de Turistas que ingresaron (valor entero)
El programa tiene un menú con las siguientes opciones:
1 – Ingresar datos
2 – Mostrar resultados.
3 – Salir.
Crear una función menú.
Opción 1 – Ingresar datos
Ingresar los datos relevados por teclado. Por cada ingreso de datos, llamar a una función que reciba los 4 datos relevados 
ingresados por teclado y los guarde en 4 vectores, respectivamente.

Opción 2 – Mostrar resultados
Llamar a una función que reciba los 4 vectores cargados en la opción 1, y los utilice para
informar, dado un código de centro turístico ingresado por teclado, la cantidad de turistas de cada quincena 
y el total de turistas que ingresaron por auto de dicho centro.

Utilizar aritmética de punteros en las funciones de las opciones 1 y 2.

Opción 3 – Salir

No se pueden utilizar variables globales.  Mostrar por pantalla de forma clara y prolija.

*/





#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#define v 50

void  datos (int *v1,char *v2,int *v3,int *v4,int dia,char centro,int acce,int cant,int i);
void mostrar (int *v1,char *v2,int *v3,int *v4);
int menu();  // muestre el menú y devuelva un valor que es la opción


main()
{
	int dia,acce,cant,i=0,x;
	char centro,v2[v]={' '};
	int v1[v]={0},v3[v]={0},v4[v]={0};  // Inicializar vectores
	
	
    x=menu();   // Invoco al menú
	
	while (x!=3)
	{
		switch(x)
		{
			case 1:
				printf("ingrese dia (del 1 al 31);\n");
				fflush(stdin);
				scanf("%d",&dia);
				printf("Centro turistico a,b o c:\n");
				fflush(stdin);
				scanf("%c",&centro);
				printf("ingrese via de acceseso:\n1=Auto, 2=Avion, 3=Micro, 4=Tren:\n");
				fflush(stdin);
				scanf("%d",&acce);
				printf("cantidad de turistas:\n");
				fflush(stdin);
				scanf("%d",&cant);
				datos(v1,v2,v3,v4,dia,centro,acce,cant,i);
				i++;
				system("cls");
			break;
			case 2:
				
				mostrar (v1,v2,v3,v4);
			break;
	
		}
	x=menu();	
	
	}

	
}

int menu()
{
	int x;
	printf("\t\tMenu\n\n1:Ingresar datos\n2:Mostrar resultados\n3:Salir\n");
	fflush(stdin);
	scanf("%d",&x);
	return x;
}

	void  datos (int *v1,char *v2,int *v3,int *v4,int dia,char centro,int acce,int cant,int i)
	{
		*(v1+i)=dia;
		*(v2+i)=centro;
		*(v3+i)=acce;
		*(v4+i)=cant;
	}
void mostrar (int *v1,char *v2,int *v3,int *v4)
	{
			int cant1=0,cant2=0,cont=0,i;
			char turi;
			printf("Centro turistico a,b o c:\n");
			fflush(stdin);
			scanf("%c",&turi);  // centro elegido
		
			for (i=0;i<50;i++)  // hasta 50
			{
				if(*(v2+i)==turi)  // Calculo para el centro turístico elegido
				{
					if(*(v1+i)<=15)  // Acá es menor o igual
						cant1=cant1+*(v4+i);
					else
						cant2=cant2+*(v4+i);
						
					if (*(v3+i)==1)
					cont++;		
				}
			
			}
		printf("el centro turistico %c tuvo:\n1er quincena:%d personas\n2da quincena:%d personas\n",turi,cant1,cant2);
		printf("la cantidad de autos que entraron en dicho centro es:%d\n",cont);
		system("pause");
		system("cls");	
	}













