#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TAM 5

void ordenar_seleccion(int vector[]);
int menor(int k, int vector[]);

 main()
{
   
    int i,j,k;
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
    ordenar_seleccion(vector);
    printf("\n \nLos valores del vector ordenado son:");	
    for (k=0;k<TAM;k++)
    		printf("\n vector[ %d] = %d", k,vector[k]);
    getch();
    
    
}

void ordenar_seleccion(int vector[])
 {
int temp, i, j, pos_men;
for (i=0; i<TAM-1 ; i++)  
        {
          pos_men = menor(i, vector);
          temp = vector[i];
          vector[i] = vector [pos_men];
          vector [pos_men] = temp;
          printf("\n ");
		  for (j=0;j<TAM ;j++)
		  	printf("\t%d",vector[j]);
       	  getch();
       }
}
 
int menor(int k, int vector[])
{
	int men, p_men, l;
	men=vector[k];
	p_men=k;
	for(l=k+1;l<TAM;l++)
		if (men>vector[l])
			{
			men=vector[l];
			p_men=l;
			}
	return p_men;
}


