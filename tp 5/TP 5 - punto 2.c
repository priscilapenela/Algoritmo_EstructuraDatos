#include <stdio.h>
#include <math.h>
int promedio(int *n1, int *n2, int *n3);
main()
{
	int nota1, nota2, nota3, final;

	printf("Ingrese primera nota: ");
	scanf("%d", &nota1);
	fflush(stdin);
	
	printf("Ingrese segunda nota: ");
	scanf("%d", &nota2);
	fflush(stdin);
	
	printf("Ingrese tercera nota: ");
	scanf("%d", &nota3);
	fflush(stdin);
	
	final = promedio(&nota1, &nota2, &nota3);
	
	if (final>4)
	{
		printf("\nAlumno aprobado\n");
	}
	else 
	{
		printf("\nAlumno desaprobado\n");
	}
	
	system("pause");
}
int promedio(int *n1, int *n2, int *n3)
{
	int y, aux=0, resultado;
	 
	 aux = *n1 + *n2 + *n3;
	 
	resultado = aux/3;
	return resultado;
}
