#include <stdio.h>
#include <string.h>
/*ESCRIBIR UNA FUNCIÓN LLAMADA "CANTIDAD" QUE RECIBA COMO PARÁMETROS UN NÚMERO ENTERO Y 
UNA CADENA Y QUE LUEGO DIGA SI LA CADENA TIENE LA MISMA CANTIDAD DE LETRAS QUE EL 
NÚMERO ENTERO INGRESADO.*/
void cantidad(int *n, char *cd);
main()
{
	int numero;
	char cadena;
	
	printf("Ingresar un numero: ");
	fflush(stdin);
	scanf("%d", &numero);
	
	printf("Ingresar una cadena: ");
	fflush(stdin);
	gets(&cadena);
	
	cantidad (&numero, &cadena);
	
}
void cantidad(int *n, char *cd)
{
	int aux;
	
	aux = strlen(cd);
	
	if(aux == *n)
	{
		printf("La cantidad de caracteres y el numero ingresado son IGUALES");
	}
	else 
	{
		printf("La cantidad de caracteres y el numero ingresado son DIFERENTES");
	}
}
