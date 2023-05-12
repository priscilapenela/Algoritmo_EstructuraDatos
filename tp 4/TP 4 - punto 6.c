//TP4 - punto 6
#include <stdio.h>
#include <math.h>
#define notas 4
main()
{
	int array[notas], i=0, cont_mayores=0;
	
	for (i=0;i<=notas;i++)
	{
		printf("Ingresar nota del alumno:");
		scanf("%d", &array[i]);
		fflush(stdin);	
	}
	
	for (i=0;i<=notas;i++)
	{
		if(array[i]>6)
			{
				cont_mayores++;
			}	
	}
	printf("Cantidad de notas mayores a 6: %d", cont_mayores);
	system("pause");
	return 0;
}
