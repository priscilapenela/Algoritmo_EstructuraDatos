#include <stdio.h>
#include <math.h>
#include <string.h>
//Segunda Valoracion
//Aplicacion de accesos 
int multa(int ocupantes);
void impresion(int ml, int mt, int cr, int cp, int cn, int porcen);
main()
{
	int DNI=0, c_ocu=0, pago=0, calculo2=0, cont_l=0, cont_r=0, cont_p=0, cont_n=0, cont_total=0, cont_multa=0;
	char pat_v[10], permi, r[3], l_infra, lugar[15];
	
	printf("Desea ingresar datos de vehiculos? SI/NO\n");
	scanf("%s", &r);
	fflush(stdin);
	
	while (strcmp(r,"SI")==0)
	{
		printf("\nIngresar numero de patente:\n");
		scanf("%s", &pat_v);
		fflush(stdin);
		
		printf("\nPosee permiso: (s=si, n=no)\n");
		scanf("%c", &permi);
		fflush(stdin);
		
		if(permi!='s')
		{
			printf("\nIngresar numero de DNI:\n");
		    scanf("%d", &DNI);
		    fflush(stdin);
		    
		    printf("\nIngresar cantidad de ocupantes:\n");
		    scanf("%d", &c_ocu);
		    fflush(stdin);
		    
			pago=multa(c_ocu);
			
			if(pago!=0)
			{
			    printf("\nValor de la multa:%d\n", pago);
				cont_multa++;
			}
		    
			printf("\nIngresar lugar donde se detecto la infraccion: (r=Liniers, p=Constitucion, n=Lugano)\n");
		    scanf("%c", &l_infra);
		    fflush(stdin);
		    
		    switch (l_infra)
		    {
		    	case 'r': strcpy(lugar,"Liniers, Av. Rivadavia");
				          if(pago>5000)
				          {
				          	cont_l++;
						  }
						  cont_r++;
		    	break;
		    	case 'p': strcpy(lugar,"Constitucion, Pte. Pueyrredon");
		    	          cont_p++;
		    	break;
		    	case 'n': strcpy(lugar,"Lugano, Pte. LA Noria");
		    	          cont_n++;
		    	break;
			}
			
		    printf("\nNumero de patente infraccionada: %s\n", pat_v);
	        printf("\nDNI de persona infraccionada: %d\n", DNI);
	        printf("\nAcceso donde ocurrio la infraccion %s\n", lugar);
	    
		    if(c_ocu>1)
		    {
		 	printf("\nEl Vehiculo fue Retenido\n");
		    }
		    else 
		    {
			c_ocu=0;
		    }
		}
	    else
	    {
	    	pago=0;
		}
	    
		cont_total++;
		
		printf("\nDesea ingresar mas datos de vehiculos? SI/NO \n");
	    scanf("%s", &r);
	    fflush(stdin);
		
		system("cls");
	}
	
	calculo2 = (cont_multa*100)/cont_total;
	impresion(cont_l, cont_total, cont_r, cont_p, cont_n, calculo2);
	
	system ("pause");
	return 0;
}
int multa(int ocupantes)
{
	int calculo;
	calculo = ocupantes*5000;
	return calculo;
}
void impresion(int ml, int mt, int cr, int cp, int cn, int porcen)
{
	printf("Cantidad de multas mayores a $5000 en Liniers: %d\n", ml);
	printf("Monto total de multas realizadas: %d\n", mt);
	printf("Cantidad de vehiculos retenidos por ACCESO LINIERS: %d\n", cr);
	printf("Cantidad de vehiculos retenidos por ACCESO CONSTITUCION: %d\n", cp);
	printf("Cantidad de vehiculos retenidos por ACCESO LUGANO: %d\n", cn);
	printf("Porcentaje de vehiculos que cometieron infraccion: %d\n", porcen);
	
	return;
}
