#include <stdio.h>
#include <string.h>

main()
{
	char palabra[1][10];
	int i, cont_letra;
	
	for (i=0;i<1;i++)
	{
		printf("Ingrese una palabra: ");
		scanf("%s", &palabra[i]);
		fflush(stdin);
	}
		
	for (i=0;i<1;i++)
	{
		printf("\n%s\n", palabra[i]);
		cont_letra = strlen(palabra[i]);
		printf("\nCantidad de letras: %d\n", cont_letra);
	}
	
	system("pause");
}
