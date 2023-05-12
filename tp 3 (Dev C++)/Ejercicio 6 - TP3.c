#include <stdio.h>
//Ejercicio 6 TP3
int negativo(int resultado); //Prototipo
main()
{
	int n, respuesta;
	printf("Ingrese un numero: "); scanf("%d", &n);
	
	respuesta=negativo(n);
	printf(" es el numero ingresado", respuesta);
	
	return(0);
}
int negativo(int resultado)
{
	int numero;
	if (resultado<0)
	{
		numero=resultado;
		printf("NEGATIVO");
	}
	else 
	{
		if(resultado=0 || resultado>0)
		{
			numero=resultado;
			printf("NO NEGATIVO");
		}
	}
	
	return numero;
}
