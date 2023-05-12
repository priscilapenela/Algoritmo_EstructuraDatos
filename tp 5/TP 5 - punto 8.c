#include <stdio.h>
#include <string.h>
void ulti_letra(char *v1);

main()
{
	int i;
	char cadena;
	
	ulti_letra(&cadena);
	
}
void ulti_letra(char *v1)
{
	int i, cantidad;
	char aux, cad[10];
	
	printf("Ingresar una cadena de caracteres (maximo 10)\n");
	gets(cad);
	fflush(stdin);
	
	cantidad = strlen(cad);
	
	printf("\nCantidad de caracteres: %d\n", cantidad);
	
	for (i=0;i<cantidad;i++)
	{
		*v1 = *(cad+i);
	}
	
	printf("\nUltimo caracter: %c\n", *v1);
}
