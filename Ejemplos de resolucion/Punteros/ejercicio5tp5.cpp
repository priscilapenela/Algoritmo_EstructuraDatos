#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

// ej punteros

void carga (int *);/* El parámetro es un puntero a entero, recibe la direccion de memoria del primer elemento del vector */
void encontrarmax(int *, int *);

int main()
{
    int enteros[10],x, y, max;
                   
    carga (enteros);   // invoco a mostrar con el argumento o parametro real enteros
      
    encontrarmax(&max, enteros); 
   
    printf("Valor máximo %d \n", max);
     
    system("pause");
}
     
void carga (int *ent)  // si el argumento es un vector, va a recibir la direccion del primer elemento
{
     // En la funcion carga voy a leer los 10 elementos del vector
     
     int numero, y;
     
     for (y=0;y<10;y++)
     {
        printf("Ingrese el elemento %d del vector\n",y);
        //scanf("%d", (ent+y));   // leo los valores del vector
        scanf("%d", &numero);  // leo los valores del vector
        *(ent+y)=numero;
     }
       
      printf("\n\n");
             
}
void encontrarmax(int *max, int *ent)
{   int y;

	*max=*ent;  // mi máximo es el primer elemento del vector
	for (y=1;y<10;y++)
	   if (*(ent+y) > *max)  {*max=*(ent+y);}  // las comparaciones para encontrar el máximo
	
}
