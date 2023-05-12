#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void carga(int *v1, int *v2);
void premio(int *v1, int *v2, int *p);
void ventas_m(int *v1, int *v2, int m1, int m2);
main()
{
	int vector1[5], vector2[5], suma, menor1, menor2;
	
	carga(vector1, vector2);
	
	premio(vector1, vector2, &suma);
	
	ventas_m(vector1, vector2, menor1, menor2);
	
	system("pause");
	
}
void carga(int *v1, int *v2)
{
	int i, monto1, monto2;
	
	printf("************CAJERA 1**************\n");
	for (i=0;i<7;i++)
	{
		printf("Ingresar monto de venta: ");
		scanf("%d", &monto1);
		fflush(stdin);
		*v1= monto1;
		
	}
	
    printf("\n************CAJERA 2**************\n");
	for (i=0;i<7;i++)
	{
		printf("Ingresar monto de venta: ");
		scanf("%d", &monto2);
		fflush(stdin);
		*v2= monto2;
	}
	
	system ("cls");
}
void premio(int *v1, int *v2, int *p)
{
	int i, s1=0, s2=0;
	for (i=0;i<7;i++)
	{
		s1 = s1 + *v1;
	}
	
	for (i=0;i<7;i++)
	{
		s2 = s2 + *v2;
	}
	
	if(s1>s2)
	{
		*p = s1;
		printf("\nLa cajera 1 realizo el mayor monto de venta\n");
	}
	else 
	{
		*p = s2;
		printf("\nLa cajera 2 realizo el mayor monto de venta\n");
	}
}
void ventas_m(int *v1, int *v2, int m1, int m2)
{
	int i;
	for (i=0;i<7;i++)
	{
		m1 = *(v1+i);
		if(*v1 <m1)
		{
			m1 = *v1;
		}
	}
	for(i=0;i<7;i++)
	{
		m2 = *v2;
		if(*v2 < m2)
		{
			m2 = *v2;
		}
	}
	
	printf("\nLa menor venta de la cajera 1 es: %d\n", m1);
	printf("\nLa menor venta de la cajera 2 es: %d\n", m2);
}

