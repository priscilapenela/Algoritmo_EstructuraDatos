#include <stdio.h>
void modificar(int );
main()
{
	int i = 1;
	printf("\ni=%d antes de llamar a la función modificar", i);
	modificar(i);
	printf("\ni=%d después de llamar a la función modificar\n", i);
	

}
void modificar(int variable)
{
	printf("\nvariable = %d dentro de modificar", variable);
	variable = 9;
	printf("\nvariable = %d dentro de modificar", variable);
}

