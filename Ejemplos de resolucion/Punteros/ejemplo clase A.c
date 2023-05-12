#include <stdio.h>
#include <stdlib.h>
void mostrar (int * ent);/**/
void main()
{
     int enteros[5],x;
     int * ejemplo;
     int * ejemplo2;
     
     for(x=0;x<5;x++)
                     enteros[x]=x;
     
	 				ejemplo=enteros;
	 				ejemplo2=&enteros[0];
					                 
                     mostrar (&enteros[0]);     
     
     system("pause");
     }
     
void mostrar (int * ent)
{
     int y;
        
     for (y=0;y<5;y++)
     	{
     			printf("%p\n ",ent);
			 printf("%d ",*ent++);
     		
     	}
         
}

