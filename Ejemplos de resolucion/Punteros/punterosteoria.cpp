
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// punteros hacer en clase en teoria ver en clase

main()
{
int *p, j;
int vec[5]={5,10,2,31,4};
p=&vec[0]; // podria directamente asignarle vec o &vec, esta ultima no acepta DEV
*p=10;     // En la variable donde apunta p, asignar el valor 10
*(p+3)=12;   // En la variable adonde apunta p+3 asignar 12
// no puedo 
//*p + 3=12;   // Del lado izquierdo no es una dirección
*(p +1)= *p +3; //Poner del lado derecho
vec[4]=22;
for (j=0; j<5; j++)
printf("%d\n" , vec[j]);
getch();
        
}
