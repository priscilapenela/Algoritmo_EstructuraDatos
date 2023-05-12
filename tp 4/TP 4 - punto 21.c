#include <stdio.h>
#include <stdlib.h>
#define tope 10
main()
{ 
    int tabla[tope], i=0, aux;
        
		for (i=0; i<tope; i++)
        { 
		    tabla[i]=i;
            printf("Elemento %d: %d\n", i+1, tabla[i]);  
        }
        
	    printf("\n");
        
		for(i=0; i<tope; i++)
        {
			aux = tabla[i];
            tabla[i] = tabla[i+1];
            tabla[i+1] = aux;
				
			printf("Elemento %d: %d\n", i+1, tabla[i]);
		}  
            
	printf("\n\n");
    system ("pause");
}
