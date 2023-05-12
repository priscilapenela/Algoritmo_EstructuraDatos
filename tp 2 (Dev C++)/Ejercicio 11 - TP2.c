#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Ejercicio 11 TP2
main()
{
	int cate, anti, hora, s1, salario;
	
	printf("Ingresar antiguedad:"); scanf("%d", &anti);
	fflush(stdin);
	s1=anti*650;
	
	printf("Ingresar cantidad de horas laborales:"); scanf("%d", &hora);
	fflush(stdin);
	
	printf("Ingresar categoria (1-4):"); scanf("%d", &cate);
	fflush(stdin);
	
	switch(cate)
	{
		case 1: salario=(hora*100)+s1;
		break;
		
		case 2: salario=(hora*200)+s1;
		break;
		
		case 3: salario=(hora*250)+s1;
		break;
		
		case 4: salario=(hora*300)+s1;
		break;
	}
	if(salario>20000)
	{
		printf("El salario supera los 20000 pesos");
	}
	else 
	{
		printf("Salario:%d\n", salario);
	}
system ("pause");
}
