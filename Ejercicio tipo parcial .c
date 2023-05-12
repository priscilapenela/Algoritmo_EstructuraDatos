//Ejercicio tipo parcial
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define y 50
int menu();
void funcion1(int *v1, char *v2, int *v3, int c, char ps, int ds, int z);
void funcion2(int *v1, int *v2, int *v3, int z);
int funcion3(char *v2, int *v3);
main()
{
	int x=0, cod=0, p, v1[y]={0}, v3[y]={0}, z=0;
	char d, v2[y]={' '};
	
	x = menu();
	
	system("cls");
	
	while(x != 3)
	{
		switch(x)
		{
			case 1: printf("\nIngresar codigo del tirador (valor del 1 al 10):\n");
			        fflush(stdin);
			        scanf("%d", &cod);
			        
			        printf("\nIngresar posicion en el blanco (C=centro, M=medio, B=borde, F=fuera):\n");
			        fflush(stdin);
			        scanf("%d", &p);
			        
			        printf("\nIngresar distancia (1=10cm, 2=20cm):\n");
			        fflush(stdin);
			        scanf("%d", &d);
			        
			        system("cls");
			        
			        funcion1(v1,v2,v3,cod,p,d,z);
			        z++;
			break;
			case 2: funcion2(v1,v2,v3,z);
			break;
		}
		
		x = menu();
	}
	system("pause");
	
}
int menu()
{
	int x;
	
	printf("------->Menu<-------\n");
	printf("\n1- Ingresar datos de los tiros al blanco del Concurso.\n");
	printf("\n2- Mostrar por pantalla y registrar resultados del Concurso.\n");
	printf("\n3- Salir.\n");
	printf("\n\nIngresar opcion: ");
	fflush(stdin);
	scanf("%d", &x);
	
	return x;
}
void funcion1(int *v1, char *v2, int *v3, int c, char ps, int ds, int z)
{
	*(v1+z) = c;
	*(v2+z) = ps;
	*(v3+z) = ds;
}
void funcion2(int *v1, int *v2, int *v3, int z)
{
	int i, puntos=0, a=0, v4[10], j, ganador=0, total=0;
	int acum=0;
	for (i=0;i<z;i++)
	{
		printf("\nTirador %d\n", i);
		printf("\nCodigo de tirador: %d", *(v1+i));
		printf("\nPosicion del blanco: %c", *(v2+i));
		printf("\nDistancia: %d", *(v3+i));
		
		puntos = funcion3(&v2+i, &v3+i);
		
		printf("Puntaje: %d", puntos);
	    
	    system("pause");
		system("cls");
	}
	for(j=0;j>10;j++)
	{
		for (i=0;i<z;i++)
		{
			if(*(v1+i) == j)
			{
				*(v4+j)= acum + puntos;
			}
			
			acum = 0;
		}
		if(a==0)
		{
			ganador = j;
			total = *(v4+j);
			a=1;
		}
		else
		{
			if(*(v4+j)>ganador)
			{
				ganador = j;
			    total = *(v4+j);
			}
		}
	}
	printf("Ganador del concurso: %d", ganador);
	printf("Puntaje: %d", total);
}
int funcion3(char *v2, int *v3)
{
	int puntaje=0;
	switch(*v2)
	{
		case 'C': if(*v3==1)
		          {
		          	puntaje = 100;
				  }
				  else
				  {
				  	puntaje = 200;
				  }
		break;
		case 'M': if(*v3==1)
		          {
		          	puntaje = 50;
				  }
				  else 
				  {
				  	puntaje = 100;
				  }
		break;
		case 'B': if(*v3==1)
		          {
		          	puntaje = 10;
				  }
				  else 
				  {
				  	puntaje = 20;
				  }
		break;
		case 'F': if (*v3==1)
		          {
		          	puntaje = -10;
				  }
				  else 
				  {
				  	puntaje = -20;
				  }
		break;
	}
	
	return puntaje;
}
