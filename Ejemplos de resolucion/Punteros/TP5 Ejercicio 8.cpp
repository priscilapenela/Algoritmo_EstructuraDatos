#include <stdlib.h>            
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

/*8- REALIZAR UNA FUNCI�N LLAMADA ULTIMALETRA, QUE TOMA UNA CADENA DE 
HASTA 10 CARACTERES COMO PAR�METRO, Y DEVUELVE EL �LTIMO CAR�CTER*/
char ultimaletra(char *cadena){
	
return cadena[strlen(cadena)-1];	
}

main(){
	
	char cadena[11];
	
	printf("Ingresar una cadena de hasta 10 caracteres\n");
	fflush(stdin);
	scanf("%s", cadena);
		
	printf("El ultimo caracter de la cadena es:%c\n", ultimaletra(cadena));
}
