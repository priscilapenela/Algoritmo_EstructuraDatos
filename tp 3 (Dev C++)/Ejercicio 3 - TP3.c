#include <stdio.h>
#include <math.h>
//Ejercicio 3 TP3 
int area1(int calculo);
int area2(int calculo2);
int area(int suma);
int mostrar(int contenido);

main()
{
	int resultado;
	resultado=mostrar(resultado);
	printf("\nEl area=%d", resultado);
	
	return (0);
}
int area1(int calculo)
{
	int resultado1;
	
	resultado1=pow(3,2);
	
	return resultado1;
}
int area2(int calculo2)
{
	int resultado2;
	
	resultado2=4*2;
	
	return resultado2;
}
int area(int suma)
{
	int a1, a2, resultado1, resultado2, resultado3;
	
	a1= area1(resultado1);
	a2= area2(resultado2);
	resultado3=a1+a2;
	
	return resultado3;
	
}
int mostrar(int contenido)
{
	int respuesta, suma;
	
	respuesta= area(suma);
}

