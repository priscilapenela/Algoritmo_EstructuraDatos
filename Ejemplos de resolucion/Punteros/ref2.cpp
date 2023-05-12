#include <stdio.h>
#include <stdlib.h>
void mostrar (int *);/**/
int main()
{
     int enteros[5],x;
     for(x=0;x<5;x++)
                     enteros[x]=x;  //cargo el vector
                     mostrar (enteros);    //llamo a la funcion
	//Muestro el vector modificado adentro de la funcion mostrar
	printf("\n\n Impresión dentro del main\n");				 
	for (x=0;x<5;x++)
     {
     	  printf("\n%x",&enteros[x]);
		  printf("\n%d",enteros[x]);
    	} 
     
     system("pause");
     }
     
void mostrar (int * ent)
{
     int y;
     int * primervalor;
     
     primervalor=ent; // guardamos el valor original de ent
     //primer printf muestra a traves de punteros el vector original
    printf("\n\n Impresión dentro de la funcion mostrar\n");
	 for (y=0;y<5;y++)
     {
     	 printf("\n%x",ent);
     	   printf("\n%d ",*ent++);
     }
     
     ent=primervalor; //vuelvo el puntero a su valor inicial.
     //modifico los valores del vector adentro de la funcion a la que le pasé el vector
     for (y=10;y<15;y++)
     {
     	 *ent=y;
     	 ent++;
     }
}
