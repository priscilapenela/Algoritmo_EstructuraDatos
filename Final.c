#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define r 50

/*
a) Una variable local declarada en la función main() de un programa puedo actualizarla en cualquier otra función definida en ese programa. V
b)  Los elementos de un vector siempre se almacenan en posiciones contiguas en la memoria. V
c) La función main() es simplemente una función más de un programa en Lenguaje C, con la particularidad de que es el punto de entrada o comienzo del programa. F
d) Un puntero es un objeto que apunta a otro objeto. Es decir, una variable cuyo valor es la dirección de memoria de otra variable. V

*/

int menu();
void funcion1(int ins, char pr, int m, int *v1, char *v2, int *v3, int y);
void funcion2(int *v1, char *v2, int *v3, int y);
main()
{
	int inscripcion, x, v1[r]={0}, v3[r]={0}, z=0, min=0; 
	char prueba, v2[r]={' '};
	
	x = menu();
	while(x != 3)
	{
		switch(x)
		{
			case 1: printf("\nIngresar numero de inscripcion del participante: ");
			        fflush(stdin);
			        scanf("%d", &inscripcion);
	                printf("\nTipo de prueba (p=pasteleria, m=mediterranea): ");
	                fflush(stdin);
	                scanf("%c", &prueba);
	                printf("\nCantidad de minutos: ");
	                fflush(stdin);
	                scanf("%d", &min);
	                
	                system("cls");
	                
	                z++;
	                funcion1(inscripcion, prueba, min, v1, v2, v3, z);
	                
	        break;
			case 2: funcion2(v1, v2, v3, z);        
			break;
			case 3: 
			break;
		}
		
		x = menu();
		
	system("cls");
	
	}
	
	system("pause");
	return 0;
}
int menu()
{
	int a; 
	
	printf("------> MENU <------\n\n");
	printf("\n1 - Ingresar datos de los participantes.\n");
	printf("\n2 - Generar informes del concurso\n");
	printf("\n3 - Salir\n");
	
	printf("Opcion: ");
	fflush(stdin);
	scanf("%d", &a);
	
	return a;
	system("cls");
	
}
void funcion1(int ins, char pr, int m, int *v1, char *v2, int *v3, int y)
{
	*(v1+y) = ins;
	*(v2+y) = pr;
	*(v3+y) = m;
}
void funcion2(int *v1, char *v2, int *v3, int y)
{
	int i, cont_p=0, cant_m=0;
	 for(i=0; i<y; i++)
	 {
	 	if (*(v2+i)=='p')
	 	{
	 		cont_p++;
		}
		else 
		{
			cant_m = *(v3+i) + cant_m;
		
		}
	 }
	 printf("Cantidad de inscriptos en Pasteleria: %d\n", cont_p);
	 printf("Tiempo total de todos los participantes de Mediterraneo: %d\n", cant_m);
	 
	 system("pause");
	 system("cls");
}
