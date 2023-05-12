#include <stdio.h>

int main()
{
	char nombre[10], apellido[20];
	int edad, telefono;
	
	printf("ingrese nombre:\n");
	scanf("%s", &nombre);
	
	printf("ingrese apellido:\n ");
	scanf("%s", &apellido);
	
	printf("ingrese edad:\n");
	scanf("%d", &edad);
	
	printf("ingrese telefono:\n");
	scanf("%ld", &telefono);
	
	printf("nombre: %s \n", &nombre);
	printf("apellido: %s \n", &apellido);
	printf("edad: %d \n ", edad);
	printf("telefono: %ld \n", telefono);
};
