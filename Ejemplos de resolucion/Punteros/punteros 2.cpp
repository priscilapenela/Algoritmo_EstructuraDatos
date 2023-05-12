#include<stdio.h>
#include<stdlib.h>
int main()
{
     int x, *punt1;
     char *punt2, letra;
     letra='a';
     x=100;
     punt2 = &letra; //asigno dirección de variable letra a punt2
     punt1=&x;//asigno dirección de variable x a punt1
     printf("Puntero a x es %p\n",punt1);
     printf("tamaño de entero %d bytes \n",sizeof(int));
     printf("Puntero a siguiente es %p\n",++punt1); //operación de aritmética de punteros
     printf("Puntero a letra es %p\n",punt2);
    printf("tamaño de char %d bytes \n",sizeof(char));
     printf("Puntero a siguiente es %p\n",++punt2); //operación de aritmética de punteros
     system("pause");
     }

