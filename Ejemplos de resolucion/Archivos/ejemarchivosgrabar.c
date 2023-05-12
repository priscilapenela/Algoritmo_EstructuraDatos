/*
Ejemplo archivos grabacion de datos

*/
#include<stdio.h>
#include<conio.h>
#define cant 50

main()
{
     int n=1;
     char nombre[80];
     double salario;
      
     FILE *parchivo;
     
     parchivo=fopen("prueba.txt","a");  // armo el puntero
     
     if(parchivo!=NULL)
     do
     {
         printf ("Introduzca el numero de empleado\n");
         fflush(stdin);
         scanf("%d", &n);
         
         if (n>0)
            {
            printf ("Introduzca el nombre de empleado\n");
            fflush(stdin);
            scanf("%s", nombre);
            printf ("Introduzca el salario de empleado\n");
            fflush(stdin);
            scanf("%lf", &salario);
            fprintf(parchivo,"%d\t %s\t %lf\n", n, nombre, salario);
            printf("%d\t %s\t %lf\n", n, nombre, salario);
            }     
      }         
      while (n>0);
      
      fclose(parchivo);
    
}
