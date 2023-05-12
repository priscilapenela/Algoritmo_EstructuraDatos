#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void contar (int *numero);

main()
{
	int vector[10], i;
	
	for (i=0;i<10;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
		fflush(stdin);
	}
	
	contar(vector);
}
void contar (int *numero)
{
	int j, n_par=0, n_impar=0;
	for (j=0;j<10;j++)
	{
		if(numero[j]%2==0)
		{
			n_par++;
		}
		else 
		{
			n_impar++;
		}
	}
	
	printf("\nCantidad de numeros pares: %d\n", n_par);
	printf("\nCantidad de numeros impares: %d\n", n_impar);
}
