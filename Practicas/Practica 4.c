#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Desempeño de los empleados de una empresa 
//Practica 4
int factores (int f1, int f2, int f3);
void mostrar (int c, int resultado);
main()
{
	int codigo, cant_dias, c1, c2, c3, total, cont_3=0, bandera=1, mayor_dias=0, mayor_codigo=0;
	char r, profesional[3], p;
	float promedio=0.0;
	
	printf("Desea registrar un empleado? (Ingrese S(Si) para continuar o N(No) para salir)\n");
	scanf("%c", &r);
	fflush (stdin);
	
	while (r!='N')
	{
	printf("\nIntroduzca el codigo del empleado\n");
	scanf("%d", &codigo);
	fflush(stdin);
	
	printf("\nIntroduzca la cantidad de dias trabajados\n");
	scanf("%d", &cant_dias);
	fflush(stdin);
	
	if(bandera=1)
	{
		mayor_dias=cant_dias;
		mayor_codigo=codigo;
	}
	else 
	{
		if(codigo>mayor_dias)
		{
			mayor_dias=cant_dias;
		    mayor_codigo=codigo;
		}
	}
	bandera=0;
	printf("\nEl empleado es profesional? (Ingrese SI o NO)\n");
	scanf("%s", &profesional);
	fflush(stdin);
	
	printf("\nIngresar calidad y cantidad de trabajo (1-5)\n");
	scanf("%d", &c1);
	fflush(stdin);
	
	printf("\nIngresar cooperacion (1-5)\n");
	scanf("%d", &c2);
	fflush(stdin);
	
	if(strcmp(profesional, "SI")==0)
	{
		printf("\nIngresar capacidad de analisis y creatividad (1-5)\n");
		scanf("%d", &c3);
		fflush(stdin);
	
	    total=factores(c1, c2, c3);
	    mostrar(codigo, total);
	
	    promedio=(c1+c2+c3)/3;
	
	    if(promedio<=3)
	    {
		    cont_3=cont_3++;
	    }
	    else
	    {promedio=0.0;}
	}
	printf("\nDesea registrar un empleado? (Ingrese S(Si) para continuar o N(No) para salir)\n");
	scanf("%c", &r);
	fflush(stdin);
	
	system ("cls");
	}
	
	printf("Cantidad de empleados fuera de nivel:%d\n", cont_3);
	printf("Empleado que trabajo mas dias:%d\n", mayor_codigo);
}
int factores(int f1, int f2, int f3)
{
	int potencial;
	if (f1>=4 && f2>=4 && f3>=4)
	{
		potencial = 1;
	}
	else 
	{
		potencial = 0;
	}
	
	return potencial;
}
void mostrar(int c, int resultado)
{
	if(resultado=1)
	{
		printf("\nel empleado %d TIENE CAPACIDAD DE DESARROLLO\n", c);
	}
	else 
	{
		prinf("\nel empleado %d NO TIENE CAPACIDAD DE DESARROLLO\n", c);
	}
	
	return;
}
