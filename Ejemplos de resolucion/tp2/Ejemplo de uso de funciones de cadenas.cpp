#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
/* ejemplos de funciones de cadenas para ver en clase*/

int main(){
    
    int i;
    
    int a, b, c;
    
    char cad1[50], cad2[50];
        
    printf("Ingrese cadena 2:");
    //scanf("%s", cad1);
    gets(cad2);
    
    strcpy(cad1,cad2);  // copia la cad2 a cad1, es como si fuera una asignacion de cad 2 a cad1
     
    printf("La cadena 1 es:");
    puts(cad1);
    
    printf("Longitud de cadena %d\n", strlen(cad2));
    
    printf("Ingrese cadena 1:");
    scanf("%s", &cad1);
    
    printf("Ingrese cadena 2:");
    scanf("%s", &cad2);
    
    if (strcmp(cad1, cad2)==0) {printf("Son iguales\n");}
                          else {printf("Son distintas\n");}
    
    if (!strcmp(cad1, cad2)) {printf("Son iguales\n");}
                          else {printf("Son distintas\n");}
                          
    strcat(cad1, cad2); 
    printf("Resultado de la concatenacion:%s\n", cad1);
                         
    
    printf("Tipee cualquier tecla para continuar");
    getch();
    
}
