#include<stdio.h>
#include<stdlib.h>
int ingreso(int );
void cambio (int , int );

main()
{
      int val1, val2, valor1, valor2;
      valor1=ingreso(val1);
      valor2=ingreso(val2);
      printf("El valor 1 es: %i , el valor 2 es: %i\n",valor1, valor2);
      cambio(valor1, valor2);
      system("PAUSE");
}

int ingreso(int val)
{
     printf("Ingrese el Valor: ");
     scanf("%i",&val);
     return val;
}

void cambio (int a, int b)
{
     int aux;
     
     aux=a;
     a=b;
     b=aux;
     printf("El valor 1: %i , el valor 2: %i\n",a,b);
}
