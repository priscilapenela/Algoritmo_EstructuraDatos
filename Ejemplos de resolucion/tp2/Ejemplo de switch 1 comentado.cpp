#include <stdio.h>
#include <stdlib.h>
/*programa dias de la semana Ejemplo de switch */
 main()
{	
    int dia; // se declara variable tipo entero
    
    printf("Ingrese dia de la semana\n"); // se escribe unmensaje enpantalla
    scanf("%d", &dia); //se ingresa el valor por teclado y se lo asigna a la variable
    
    while (dia != 0) //comienza ciclo de iteracion indefinida
    {
  
    switch (dia) { // comienza sentencia condiconal multiple
           case 1: printf("Lunes\n"); // en caso que el valor sea 1 muestra lunes por pantalla
                   break; //termina la esctructura multiple, sale de la misma en este punto.
           case 2: printf("Martes\n"); // en caso que el valor sea 2 muestra Martes por pantalla
                   break; //termina la esctructura multiple, sale de la misma en este punto.
           case 3: printf("Miercoles\n");
                   break;
           case 4: printf("Jueves\n");
                   break;
           case 5: printf("Viernes\n");
                   break;
           case 6: printf("Sabado\n");
                   break;
           case 7: printf("Domingo\n");
                   break;   
           default: printf("Error\n"); //en caso que se haya ingresado un valor distinto de 1 a 7
                   }      

    printf("Ingrese dia de la semana\n"); // se solicita un nuevo valor para la variable dia, si es 0 termina
    scanf("%d", &dia); //se asigna nuevo valor a la variable dia y vuelve alcomienzo de la iteracion
    
    }
    
    system("pause"); //Si la variable dia es =0 sale del ciclo de iteracion y hace una pausa esperando que el usuario oprima la tecla enter. 
	
}
