/*
Ejemplo archivos lectura de datos
*/
#include<stdio.h>
#include<conio.h>
#define cant 50

main()
{
      int n=1;
      char nombre[80];
      double salario;
         
     FILE *parchivo;  // Definimos estructura file indicando el nombre del puntero con el cual identificamos a nuestro archivo
     
     parchivo=fopen("prueba.txt","r");
     
     if(parchivo!=NULL)
     {
       while (!feof(parchivo))
       {
            fscanf(parchivo,"%d\t %s\t %lf\n", &n, nombre, &salario);
            printf("%d\t %s\t %lf\n", n, nombre, salario);
            getch();
       }     
     }         
      
      fclose(parchivo);
}
