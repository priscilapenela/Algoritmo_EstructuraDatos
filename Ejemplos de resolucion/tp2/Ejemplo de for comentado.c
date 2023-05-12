#include <stdio.h>      /*incluye informacion acerca de la biblioteca estandar*/
#include <stdlib.h>     /*incluye informacion acerca de la biblioteca estandar*/

/*Programa que muestra numeros del 1 al 10 utilizando la estructura de iteracion for*/
   
int main()                      /*se definde una funcion llamada main que no recibe valores de argumentos*/
{	                        /*comienzo de la funcion main*/
    int i;                      /*bloque declarativo de variables. Se declara la variable i como variable entera*/
    
    for (int i=1;i<=10;i++)     /*Entra al ciclo iterativo for. Asigna el valor inicial a la variable de control i con el valor uno y determina cuando finaliza el ciclo iterativo con el valor i<=10. La expresion i++ define como cambia la variable de control cada vez que se repite el bucle.  */
    {                           /*cominzo del ciclo iterativo*/
    printf("%d\n", i);          /*imprime en pantalla el valor de la variable i*/
    }                           /*cierre del ciclo iterativo*/
    
    system("pause");            /*realiza una pausa en el programa hasta que el usuario presione alguna tecla para continuar*/  
    return 0;                   /*se informa al sistema operativo que el programa finalizo correctamente*/	
}                               /*fin de la funcion main*/
