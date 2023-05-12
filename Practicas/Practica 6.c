#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float monto(float K, float G1, float G2);
void empleados(int contador);
main()
{
	int cl=0, cont2000=0;
	char cate, ingreso[3];
	float kr=0.0, gp=0.0, gc=0.0, anti=0.0, vk=0.0, cal1=0.0, cal2=0.0, cal3=0.0, total=0.0, m_anti=0.0;
	
	printf("Desea registrar empleados? SI/NO \n");
	scanf("%s", &ingreso);
	fflush(stdin);
	
	while(strcmp(ingreso,"SI")==0)
	{
		printf("\nIngresar codigo de Legajo\n");
		scanf("%d", &cl);
		fflush(stdin);
		
		printf("\nIngresar categoria del empleado (v =Vendedor, j=Jefe Comercial, g=Gerente de Producto)\n");
		scanf("%c", &cate);
		fflush(stdin);
		
		printf("\nIngresar kilometros recorridos\n");
		scanf("%f", &kr);
		fflush(stdin);
		
		printf("\nIngresar gastos de peaje\n");
		scanf("%f", &gp);
		fflush(stdin);
		
		printf("\nIngresar gastos de comida\n");
		scanf("%f", &gc);
		fflush(stdin);
		
		system ("cls");
		
		if(kr>2000)
		{
			cal1 = 2000*10;
			cal2 = (kr-2000)*5;
			cal3 = cal1 + cal2;
			
			total = monto(cal3, gp, gc);
			if(cate=='v')
		    {
			   printf("\nIngresar valor de anticipo\n");
		       scanf("%d", &anti);
		       fflush(stdin);
		       
		       m_anti=total-anti;
		       if(m_anti>0)
		       {
		       	 printf("\nImporte a pagar por la empresa:%f\n", m_anti);
			   }
			   else 
			   {
			   	printf("\nImporte a devolver por el empleado%f\n", m_anti);
			   }
			   
			   cont2000=cont2000++;
		    }
		}
		else 
		{
			cal3=kr*10;
			
			total = monto(cal3, gp, gc);
		    if(cate=='v')
		    {
			    printf("\nIngresar valor de anticipo\n");
		        scanf("%d", &anti);
		        fflush(stdin);
		        
		        m_anti = total - anti;
		        if(m_anti>0)
		        {
		        	printf("\nImporte a pagar por la empresa%f\n", m_anti);
				}
				else
				{
					printf("\nImporte a devolver por el empleado%f\n", m_anti);
				}
		    }
	    }

	  printf("Desea registrar mas empleados? SI/NO \n");
	  scanf("%s", &ingreso);
	  fflush(stdin);
	}
	system("cls");
	
	empleados(cont2000);
	
	system("pause");
	return 0;
}
float monto (float K, float G1, float G2)
{
	float resultado;
	
	resultado= K + G1 + G2;
	
	return resultado;
}
void empleados (int contador)
{
	printf("La cantidad de empleados VENDEDORES que recorrieron mas de 2000km: %d", contador);
}
