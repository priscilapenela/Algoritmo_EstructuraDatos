#include <stdio.h>
#include <stdlib.h>
// método de burbujeo con punteros
#define TAM 5
void burbuja (int * );/**/
void mostrar (int * );

int main()
{
     int enteros[TAM],x;
     for(x=0;x<TAM;x++)
     {printf("Ingrese valor\n");
     scanf("%d",&enteros[x]);}
     mostrar(enteros);
     system("pause");
     burbuja(enteros); 
     system("pause");
     mostrar(enteros);    
     
     system("pause");
     }
     
void burbuja (int * ent)
{
     int i,j,temp;
     for (i=1; i<TAM; i++)
         {for (j=0 ; j<TAM - 1; j++)
               {if (*(ent+j) > *(ent+j+1))
                    {temp = *(ent+j);
                    *(ent+j) = *(ent+j+1);
                    *(ent+j+1) = temp;
                    }
               }
         }                
     }
     
void mostrar (int * ent)
{
     int y;
     
     for (y=0;y<5;y++)
         printf("%d ",*ent++);
     
     }
