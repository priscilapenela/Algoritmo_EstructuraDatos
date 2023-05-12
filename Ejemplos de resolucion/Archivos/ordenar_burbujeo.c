#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TAM 5

void ordenar(int vector[]);

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
    
    ordenar(vector);
    
    printf("\n \nLos valores del vector ordenado son:");	
    for (i=0;i<TAM;i++)
    		printf("\n vector[ %d] = %d", i,vector[i]);
    getch(); 
}
void ordenar(int vector[])
 {
int temp, i, j, k;
for (i=1; i<TAM; i++)
	{	
	for (j=0 ; j<TAM - 1; j++)
        {
        if (vector[j] > vector[j+1])
            {
            temp = vector[j];
            vector[j] = vector[j+1];
            vector[j+1] = temp;
        	}
    	}
	}
}
 

