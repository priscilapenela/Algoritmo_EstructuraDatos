#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

// ej punteros

void mostrar (int *ent);/* El parámetro es un puntero a entero, recibe la direccion de memoria del primer elemento del vector */

int main()
{
     int enteros[5],x, y;
     
     for(x=0;x<5;x++)
          enteros[x]=x;
          
     for (y=0;y<5;y++){
         printf(" %d ",enteros[y]);   
		 printf("\n\n"); } 
                     
     mostrar (enteros);   // invoco a mostrar con el argumento o parametro real enteros
      
     
     system("pause");
}
     
void mostrar (int *ent)
{
     int y;
     
     
     for (y=0;y<5;y++)
        // printf(" %d ",ent[y]);
        //ent[y]= ent[y]*2;  // modifico los contenidos de los elementos del vector
        //scanf("%d", &ent[y]);   // leer elementos de un vector 
         scanf("%d", ent+y );  // lectura de los elementos del vector 
         
      printf("\n\n");
         /*oooooooo*/
     
     for (y=0;y<5;y++)
         printf(" %d ",*ent++);
         //  printf(" %d ",*(ent+y)); Esta sentencia no modifica al puntero
         printf("\n\n");
         
       
}
