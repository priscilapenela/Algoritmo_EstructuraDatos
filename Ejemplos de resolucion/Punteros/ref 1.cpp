#include <stdio.h>
void modificar(int *variable);
main()
{
	int i = 1;
	printf("\ni=%d antes de llamar a la funci�n modificar", i);
	printf("\ndireccion de memoria de i es %x", &i);
		modificar(&i);
	printf("\ni=%d despu�s de llamar a la funci�n modificar", i);
	return 0;
}
void modificar(int *variable)
{
printf("\nvariable = %d dentro de modificar", *variable);
*variable = 9;
printf("\nvariable = %d dentro de modificar", *variable);
}
