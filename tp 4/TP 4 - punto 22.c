#include <stdio.h>
#include <string.h>

main()
{ 
    int  tot=0, caracteres, i, j;
    char ahora1[30];
    
	printf("Escribe una frase, para acabar un punto '.': \n");
   gets(ahora1);
    
	caracteres = strlen(ahora1);
	
	char ahora2[1][caracteres+1];
	for (i=0;i<1;i++)
    {
    	ahora2[i] = ahora1;	
	}
	
    for (i=0;i<1;i++)
    {
    	for(j=0;j<caracteres;j++)
    	{
    		if (ahora2[j]=='t' || ahora2[j+1]=='a')  
		    {
		        tot ++;
		    }
		}
	}
		
    printf(" aparece veces '-ta-'", tot);
	 
	printf("\n\n");
	system ("PAUSE");
}
