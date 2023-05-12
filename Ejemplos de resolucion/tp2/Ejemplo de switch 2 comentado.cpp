#include <stdio.h>
#include <stdlib.h>
/*programa dias de la semana habil Ej switch*/
 main()
{	
    int dia; //definicion de variable tipo entero
    
    printf("Ingrese dia de la semana\n"); // escribe mensaje por pantalla
    scanf("%d", &dia); //se espera el ingreso de un valor por teclado y se le asigna el mismo a la variable
    
    while (dia != 0) //comeinza el ciclo de iteracion indefinido
    {
  
    switch (dia) { //inicia ciclocondicional multiple comparando la variable dia
           case 1: // note que si el valor ingresado es de 1 a 5 hay un break en el 5     
           case 2: // esto hace que siga la secuencia una a una hasta llegar al 5     
           case 3: // si no se indica el break sigue hasta encontrar algo para ejecutar 
           case 4:   
           case 5: printf("Dia Laborable\n"); //luego de recorrer los valores anteriores ejecuta el primero que tiene break y sale de la estructura multiple.
                   break; //sentencia que indica que debe salir de la condicion multiple
           case 6:     
           case 7: printf("Dia no Laborable\n"); //sucede lo mismo que lo anterior si el valor esta entre 6 y 7
                   break; //Sale del ciclo de iteracion    
           
		   default: printf("Error \n"); //si no ingresa un valor de 1 a 7 emite un error
                   }      

    printf("Ingrese dia de la semana\n"); //escribe un mensaje por pantalla al salir del condicional
    scanf("%d", &dia); //espera el ingreso de un valor y se lo asigna a la variable dia vuelve a la comparacion de la iteracion
    
    }
    
    system("pause"); // al salir de la iteracion realiza una pausa esperando que el usuario oprima enter.	
}
