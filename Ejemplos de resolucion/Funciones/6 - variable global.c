#include <stdio.h>
void unaFuncion();
void otraFuncion();
int variable;
main()
{
	variable = 9;
	printf("El valor de variable es: %d\n", variable);
	unaFuncion();
	otraFuncion();
	printf("Ahora el valor de variable es: %d\n", variable);
	return 0;
}
void unaFuncion()
{
	printf("En la funci�n unaFuncion, variable es: %d\n", variable);
}
void otraFuncion()
{
	variable++;
	printf("En la funci�n otraFuncion, variable es: %d\n",variable);
}
