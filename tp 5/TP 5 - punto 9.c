#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void letras(char *l, int *n);
main()
{
	char cadena[30], numero=0;
	
	printf("Ingresar una cadena de caracteres: ");
	fflush(stdin);
	scanf("%s", cadena);
	
	letras(&cadena, &numero);
	
	printf("Numero de caracteres: %d", numero); 
	
}
void letras(char *l, int *n)
{
	*n = strlen(l);
}
