#include <stdio.h>     /*incluye informacion acerca de la biblioteca estandar*/
#include <stdlib.h>    /*incluye informacion acerca de la biblioteca estandar*/ 

/*Programa que muestra numeros del 1 al 10 utilizando la estructura de iteracion while*/

 int main()                /*se definde una funcion llamada main que no recibe valores de argumentos*/
{	                   /*comienzo de la funcion main*/

    int i=1;               /*bloque declarativo de variables. Se declara la variable i como entera y se inicializa con el valor 1*/
    
    while (i<=10)          /*Se evalua la condicion logica, si es verdadera se jecutan las sentencias del bucle, si es falso se abandona el ciclo. Mientras el valor de la variable i sea igual o menor a 10 entra al ciclo iterativo While*/
    {		           /*cominzo del ciclo iterativo*/
    printf("%d\n", i);     /*imprime en pantalla el valor de la variable i*/
    i++;                   /*se incrementa el valor de la variable i en uno*/
    }                      /*cierre del ciclo iterativo*/
    
    system("pause");       /*realiza una pausa en el programa hasta que el usuario presione alguna tecla para continuar*/  
    return 0;              /*se informa al sistema operativo que el programa finalizo correctamente*/
	  
}                          /*fin de la funcion main*/
