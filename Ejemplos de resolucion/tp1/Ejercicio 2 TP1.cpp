#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 2 de tp1 */
int main()
{
float n1,n2,n3,resultado;  /* Declaración variables */
	
printf ("Ingrese primer numero\n");
fflush(stdin);
scanf("%f", &n1);

printf ("Ingrese segundo numero\n");
fflush(stdin);
scanf("%f", &n2);

printf ("Ingrese tercer numero\n");
fflush(stdin);
scanf("%f", &n3);
     
resultado=n1+n2+n3;

printf("El resultado de la suma de los tres numeros es %f \n", resultado);   
   
	
system("pause");
}




