#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TAM 5

void ordenar_insercion(int vector[]);

 main()
{
   
    int i,j;
    int vector[TAM];
    for (i=0;i<TAM;i++)
    	{
    		printf("\n Ingrese el valor %d del vector: ", i);
    		scanf("%d",&vector[i]);  
    	}
    printf("\n Los valores del vector desordenado son:");	
    for (i=0;i<TAM;i++)
    		printf("\n vector[ %d] = %d", i,vector[i]);
    getch();
    ordenar_insercion(vector);
    printf("\n \nLos valores del vector ordenado son:");	
    for (i=0;i<TAM;i++)
    		printf("\n vector[ %d] = %d", i,vector[i]);
    getch();
    
    
}

void ordenar_insercion(int vector[])
 {
int temp, i, j,k;
for (i=1; i<TAM; i++)
    {
	temp = vector[i];
    j = i - 1;
    while ( (vector[j] > temp) && (j >= 0) )
            {
              	vector[j+1] = vector[j];
            	j--;
            }
        vector[j+1] = temp;
    printf("\n");
    for (k=0;k<TAM ;k++)
		  	printf("\t%d",vector[k]);
       	  getch();
	}
}
 

