#include <stdio.h>
#include <stdlib.h>

/*programa con if */
 main()
{	
    int nota; //definicion de variable tipo entero
    
    printf("Ingrese nota del alumno\n"); //escribe un mensaje en pantalla

    scanf("%d", &nota);  //espera el ingreso de un valor y lo asigna a la variable entera
    
    while (nota != 0) // comienza ciclo de Iteracion indefinida
    {
    	
// Sentencia simple    	

    printf("Sentencia simple\n"); //escribe un mensaje enla pantalla y salta un renglon 
    printf("\n"); //salta un renglon
  
    if (nota >= 4) //estructura condicional simple, sin el falso
	       
		   printf("Alumno aprobado\n");  // una sola sentencia sin llaves, varias sentencias encerradas entre llaves

	printf("\n");
	
// Sentencia doble    

    printf("Sentencia doble\n");
    printf("\n");
    
    if (nota >= 4) //inicio estructura condicional
	        
			{printf("Alumno aprobado\n");} // muestra resultado si se cumple la condicion
   
    else //en caso que sea falso
	        {printf("Alumno reprobado\n");} //muestra resultado si NO se cumple la condicion
    
    printf("\n");
    
// Sentencia anidada

   printf("Sentencia anidada\n");
   printf("\n");
    
    if (nota >= 4) //primer sentencia condicional
	       
		   if (nota >=7) //segunda sentencia condicional, SI se cumple la primera
		           printf("Alumno distinguido\n"); // si secumplen las dos condicones
		   else //si no se cumple la segunda condicon
		           printf ("Alumno aprobado\n");
    else 
	printf("Alumno reprobado\n"); //si no se cumple la primera  
	
	printf("\n"); 
   
    printf("Ingrese nota del alumno\n"); //se solicita que ingrese otra nota para seguir o terminar el ciclo si es 0

    scanf("%d", &nota); //se asigna nuevo valor ingresado a la variable nota y vuelve al comienzo de la iteracion indefinida    
    }
    
    system("pause"); //cuando sale del ciclo hace una pausa para ver los valores y con enter finaliza
	
}
