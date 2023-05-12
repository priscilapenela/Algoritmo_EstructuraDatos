#include <stdio.h>
void primera(void)
{
	printf("Llamada a la función primera\n");
	return;
}
void segunda(void)
{
	printf("Llamada a la función segunda\n");
	return;
}
main()
{
	printf("La primera función llamada, main\n");
	primera();
	segunda();
	printf("Final de la función main\n");
	return 0;
	}

