#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 main()
{
     int *ent, enteros[5]={1,2,3,4,5}, x;  // enteros[5]={0};
     ent=enteros; /*lo mismo es ent=&enteros[0]*/
     
    // otra forma de recorrer el vector con punteros, el ciclo for se controla con el puntero
    
     for(;*ent;ent++)
     {
      printf("%p\n", ent);
      printf("%d\n", *ent);
	 }
}
