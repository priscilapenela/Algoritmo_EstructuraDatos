#include <stdio.h>
void primera(void)
{
	printf("Llamada a la funci�n primera\n");
	return;
}
void segunda(void)
{
	printf("Llamada a la funci�n segunda\n");
	return;
}
main()
{
	printf("La primera funci�n llamada, main\n");
	primera();
	segunda();
	printf("Final de la funci�n main\n");
	return 0;
	}

