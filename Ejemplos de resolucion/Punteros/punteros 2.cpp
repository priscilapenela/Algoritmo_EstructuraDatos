#include<stdio.h>
#include<stdlib.h>
int main()
{
     int x, *punt1;
     char *punt2, letra;
     letra='a';
     x=100;
     punt2 = &letra; //asigno direcci�n de variable letra a punt2
     punt1=&x;//asigno direcci�n de variable x a punt1
     printf("Puntero a x es %p\n",punt1);
     printf("tama�o de entero %d bytes \n",sizeof(int));
     printf("Puntero a siguiente es %p\n",++punt1); //operaci�n de aritm�tica de punteros
     printf("Puntero a letra es %p\n",punt2);
    printf("tama�o de char %d bytes \n",sizeof(char));
     printf("Puntero a siguiente es %p\n",++punt2); //operaci�n de aritm�tica de punteros
     system("pause");
     }

