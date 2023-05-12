#include<stdio.h>
#include<stdlib.h>
void main()
{
     int *puntero /*declaro variable de tipo puntero a entero*/, valor, *direccion /*declaro variable de tipo puntero a entero*/, valor1, valor2;
     valor=100;
     puntero = &valor; //asigno dirección de memorio de variable valor a variable puntero
     direccion = puntero; //asignación entre variables de mismo tipo, tipo puntero 
     valor1=*puntero; // asigno valor almacenado en la dirección de memoria almacenada en variable puntero, a variable valor1.
     printf("El valor ingresado es %d y su direccion %d\n",valor,puntero);
     printf("El valor ingresado es %d y su direccion %d\n",valor1,direccion);
     printf("El valor de la direccion en hexadecimal es %x %x\n",puntero,direccion);
     printf("El valor de la direccion en hexadecimal es %x %x\n",&puntero,&direccion);
	 system("pause");
     }

