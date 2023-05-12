#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
     int *ent, enteros[5]={1,2,3,4,5}, x;
     ent=enteros; /*lo mismo es ent=&enteros[0]
     3 formas de imprimir lo mismo*/
     
     for(x=0;x<5;x++) printf("%d\n",enteros[x]);
     /* ó*/
     for(x=0;x<5;x++) printf("%d\n",ent[x]);
     /* ó*/
     for(x=0;x<5;x++)
     {
     printf("%p\n",ent+x);
     printf("%d\n",*(ent+x));      
                                 } 
                                       
     system("pause");
     }

