#include <stdio.h>      /*incluye informacion acerca de la biblioteca estandar*/
#include <stdlib.h>     /*incluye informacion acerca de la biblioteca estandar*/     
/* Ej 3 tp1 */

int main()  /*definde una funcion llamada main que no recibe valores de argumentos*/ 
{           /*las proposiciones del mail estan encerradas entre llaves*/

	float a, b, suma, resta, mult, divi, aux;  /*bloque declarativo de variables*/
	
	fflush(stdin);      /*vacia el buffer del teclado*/
    printf("Ingrese a:\n"); /*muestra por pantalla el mensaje Ingrese a:*/
    scanf("%f", &a);        /*lee el dato que se ingresa por teclado y lo guarda en la variable a*/
   	fflush(stdin);      /*vacia el buffer del teclado*/
    printf("Ingrese b:\n"); /*muestra por pantalla el mensaje Ingrese b:*/
    scanf("%f", &b);        /*lee el dato que se ingresa por teclado y lo guarda en la variable b*/
    
    suma=a+b;     /*suma el contenido de la variable a mas el contenido de la variable b y el resultado lo asigna a la variable suma*/
    resta=a-b;    /*resta el contenido de la variable a al contenido de la variable b y el resultado lo asigna a la variable resta*/
    mult=a*b;     /*multiplica el contenido de la variable a con el contenido de la variable b y el resultado lo asigna a la variable mult*/
    divi=a/b;     /*hace la division entre las variables a y b y el resultado lo asigna a la variable divi*/
     
     printf(" Suma %f\n", suma);      /*muestra por pantalla el mensaje Suma y a continuacion informa el contenido de la variable suma*/
     printf(" Resta %f\n", resta);    /*muestra por pantalla el mensaje Resta y a continuacion informa el contenido de la variable resta*/
     printf(" Multiplicacion %f\n", mult);      /*muestra por pantalla el mensaje Multiplicacion y a continuacion informa el contenido de la variable mult*/
     printf(" Division %f\n", divi);  /*muestra por pantalla el mensaje Division y a continuacion informa el contenido de la variable divi*/
     
     aux=a;/*realiza el intercambio de variables. Para ello guarda el valor de la variable a en la variable aux*/
     a=b;  /*el valor de la variable b se lo asigna a la variable a*/
     b=aux; /*el valor de la variable aux es asignado a la variable b*/
     
	printf(" La variable a contiene: %f\n", a);  /*muestra por pantalla el mensaje La variable a contiene: y a continuacion muestra el valor de dicha variable*/
        printf(" La variable b contiene: %f\n", b);  /*muestra por pantalla el mensaje La variable b contiene: y a continuacion muestra el valor de dicha variable*/
     
	system("pause"); /*realiza una pausa en el programa hasta que el usuario presione alguna tecla para continuar*/
}  /*fin de la funcion principal main*/
